#include "../include/BBlock.h"

/* Basic Blocks */

int BBlock::nCounter = 0;
std::list<std::string> BBlock::read_blocks;

BBlock::BBlock() :
        tExit(NULL), fExit(NULL), name("blk" + std::to_string(nCounter++))
{
}

/*BBlock::BBlock(std::string n) :
        tExit(NULL), fExit(NULL), name(n)
{
}*/

std::string BBlock::assembly_convert()
{
    //handling the last block here ????? into bblock
    /* how to 
    * last block --> true and false = 0 (no jump) 
    * replace by jump to jump point explicitly positioned at the end
    */
    //std::string rslt = "\"true:\\n\\t\"\n\"movq $1, %%rbx\\n\\t\""; //not working, where is return jump ? 
    std::string rslt = "\""+name+":\\n\\t\"\n";
    for(auto&& i : instructions)
    {
        rslt += i->assembly();
    }
    if(tExit == NULL && fExit == NULL)
    {
        //rslt += "\"jmp endpoint\\n\\t\"\n";
    }else if(fExit == NULL){
        rslt += "\"jmp"+tExit->name+"\\n\\t\"\n";
        tExit->assembly_convert();
    }else 
    {
        if(instructions.back()->op == '?')
        {
            rslt += "\"je "+tExit->name+"\\n\\t\"\n"; //==
            rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
        }else if(instructions.back()->op == '~')
        {
            rslt += "\"jne "+tExit->name+"\\n\\t\"\n"; //=~
            rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
        }else if(instructions.back()->op == 'i')
        {
            rslt += "\"jg "+tExit->name+"\\n\\t\"\n"; //<=
            rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
        }else if(instructions.back()->op == 's')
        {
            rslt += "\"jge "+tExit->name+"\\n\\t\"\n"; //>=
            rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
        }else if(instructions.back()->op == '<')
        {
            rslt += "\"jge "+tExit->name+"\\n\\t\"\n"; //<
            rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
        }else if(instructions.back()->op == '>')
        {
            rslt += "\"je "+tExit->name+"\\n\\t\"\n"; //>
            rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
        }
        tExit->assembly_convert();
        fExit->assembly_convert();
        //TODO same but for logic operators
    }
    return rslt;
}

void BBlock::dumpCFG(std::ofstream& myfile)
{
    if(nCounter > 0){
        myfile << name << "[label=\"";
        for(auto i : instructions)
            myfile << i->dump() << std::endl;
        myfile << "\",shape=\"rect\"];" << std::endl;
        if(tExit != NULL)
            myfile << name << " -> " << tExit->name << " [label=\"true\"];" << std::endl;
        if(fExit != NULL)
            myfile << name << " -> " << fExit->name << " [label=\"false\"];" << std::endl;
        read_blocks.push_back(name);
        if(tExit != NULL && !already_read(tExit->name))
            tExit->dumpCFG(myfile);
        if(fExit != NULL && !already_read(fExit->name))
            fExit->dumpCFG(myfile);
    }
}

/* EXAMPLE 

digraph {
block0 [label="t1 <- x + y\nt2 <- t1 = 0\n...", shape="rect"];
block1 [label="...", shape="rect"];
block2 [label="...", shape="rect"];
block0 -> block1 [label="true"];
block1 -> block0;
block0 -> block2 [label="false"];
}

*/

bool BBlock::already_read(std::string n)
{
    if(read_blocks.size() > 0)
    {
        for(auto i : read_blocks)
        {
            if(i.compare(n) == 0)
                return true;
        }
    }
    return false;
}
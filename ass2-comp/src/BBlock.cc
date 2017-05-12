#include "../include/BBlock.h"

/* Basic Blocks */

int BBlock::nCounter = 0;

BBlock::BBlock() :
        tExit(NULL), fExit(NULL), name("blk" + std::to_string(nCounter++))
{
}

std::string BBlock::assembly_convert()
{
    //handling the last block here ????? into bblock
    /* how to 
    * last block --> true and false = 0 (no jump) 
    * replace by jump to jump point explicitly positioned at the end
    */
    std::string rslt = "\""+name+":\\n\\t\"\n";
    for(auto&& i : instructions)
    {
        rslt += i.assembly();
    }
    if(tExit == NULL && fExit == NULL)
    {
        rslt += "\"jmp endpoint\\n\\t\"\n";
    }else if(fExit == NULL){
        rslt += "\"jmp"+tExit->name+"\\n\\t\"\n";
    }else 
    {
        //handle if another condition than =
        rslt += "\"je "+tExit->name+"\\n\\t\"\n";
        rslt += "\"jmp "+fExit->name+"\\n\\t\"\n";
    }
    return rslt;
}

void BBlock::dumpCFG(std::ofstream& myfile)
{
        myfile << name << "[label=\"";
        for(auto i : instructions)
                myfile << i.dump() << std::endl;
        myfile << "\",shape=\"rect\"];" << std::endl;
        myfile << name << " -> " << tExit->name << " [label=\"true\"];" << std::endl;
        myfile << name << " -> " << fExit->name << " [label=\"false\"];" << std::endl;
        myfile << tExit->dumpCFG(myfile) << std::endl;
        myfile << fExit->dumpCFG(myfile) << std::endl;
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
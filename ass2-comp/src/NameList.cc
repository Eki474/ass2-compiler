#include "../include/NameList.h" 

NameList::NameList(Node r)
{}

void NameList::Set() 
{ 
    size = std::to_string(Statement::children.size());
    state++;
}

std::string NameList::convert(BBlock** out)
{
    Set();
    // Write three address instructions to output
    if(!Statement::children.empty())
    {
        for(auto i : Statement::children)
            i->convert(out);
        (*out)->instructions.push_back(new ThreeAdNameList("namelist", ' ', size, ""));
    }
    else 
        (*out)->instructions.push_back(new ThreeAdNameList("namelist", ' ', "0", ""));
    return name;
}
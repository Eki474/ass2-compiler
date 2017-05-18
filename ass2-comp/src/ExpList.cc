#include "../include/ExpList.h" 

ExpList::ExpList(Node r)
{}

void ExpList::Set() 
{ 
    size = std::to_string(Statement::children.size());
    state++;
}

std::string ExpList::convert(BBlock** out)
{
    Set();
    // Write three address instructions to output
    if(!Statement::children.empty())
    {
        for(auto i : Statement::children)
            i->convert(out);
        (*out)->instructions.push_back(new ThreeAdExpList("explist", ' ', size, ""));
    }
    else 
        (*out)->instructions.push_back(new ThreeAdExpList("explist", ' ', "0", ""));
    return name;
}
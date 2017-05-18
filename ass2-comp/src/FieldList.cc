#include "../include/FieldList.h" 

FieldList::FieldList(Node r)
{}

void FieldList::Set() 
{ 
    name = "_t" + std::to_string(nCounter++); 
    size = std::to_string(Statement::children.size());
    if(!Statement::children.empty())
        first_elem = Statement::children.front();
    state++;
}

std::string FieldList::convert(BBlock** out)
{
    Set();
    // Write three address instructions to output
    if(!Statement::children.empty())
        (*out)->instructions.push_back(new ThreeAdTable(name, ',', first_elem->convert(out), size));
    else 
        (*out)->instructions.push_back(new ThreeAdTable(name, ',', "empty", size));
    return name;
}
#include "../include/Table.h" 

Table::Table(Node r)
{}

void Table::Set() 
{ 
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Table::convert(BBlock** out)
{
    Set();
    // Write three address instructions to output
    if(!Statement::children.empty())
        return Statement::children.front()->convert(out);
    else 
        (*out)->instructions.push_back(new ThreeAdTable(name, ',', "empty", "0"));
    return name;
}
#include "../include/Variable.h" 

Variable::Variable(Node r) : var_name(r.value)
{}

void Variable::Set() 
{
    name = "_t" + std::to_string(nCounter++); 
    state++;
    /* contains */
    bool a = false;
    for(std::string i : var_list)
    {
        if(i == var_name)
            a = true;
    }
    /* contains */
    if(!a)
        var_list.push_back(var_name);
}

std::string Variable::convert(BBlock* out)
{
    // Write three address instructions to output
    return "_" + var_name;
}
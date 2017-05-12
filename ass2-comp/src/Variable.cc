#include "../include/Variable.h" 

Variable::Variable(Node r)
{}

void Variable::Set(std::string n) 
{
    var_name = n;
    name = "[_t" + std::to_string(nCounter++) + "]"; 
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
    //ThreeAd expr = ThreeAd(name, ' ', var_name, "");
    //out->instructions.push_back(expr);
    return "[_"+var_name+"]";
}
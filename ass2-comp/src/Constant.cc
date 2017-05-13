#include "../include/Constant.h"


Constant::Constant(Node r)
: Svalue(new LuaInt(std::stoi(r.value)))
{}

void Constant::Set(int v) 
{
    value = "$" + std::to_string(v);
    name = "[_t" + std::to_string(nCounter++) + "]"; 
    state++;
}

std::string Constant::convert(BBlock* out)
{
    // Write three address instructions to output
    return value;
}
#include "../include/Constant.h"


Constant::Constant(Node r)
: Svalue(new LuaInt(std::stoi(r.value)))
{}

void Constant::Set() 
{
    value = "$" + std::to_string(Svalue->attributeInt);
    state++;
}

std::string Constant::convert(BBlock** out)
{
	Set();

    // Write three address instructions to output
    return value;
}
#include "../include/ConstantBool.h"


ConstantBool::ConstantBool(Node r)
: Svalue(new LuaBool(r.value == "true"))
{}

void ConstantBool::Set() 
{
    value = "$" + std::to_string(Svalue->attributeBool);
    state++;
}

std::string ConstantBool::convert(BBlock* out)
{
	Set();

    // Write three address instructions to output
    return value;
}
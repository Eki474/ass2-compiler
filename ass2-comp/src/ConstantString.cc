#include "../include/ConstantString.h"


ConstantString::ConstantString(Node r)
: Svalue(new LuaString(r.value))
{}

void ConstantString::Set() 
{
    value = "$" + Svalue->attributeString;
    state++;
}

std::string ConstantString::convert(BBlock** out)
{
	Set();

    // Write three address instructions to output
    return value;
}
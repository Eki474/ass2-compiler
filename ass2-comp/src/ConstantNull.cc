#include "../include/ConstantNull.h"


ConstantNull::ConstantNull(Node r)
: Svalue(new LuaEmpty())
{}

void ConstantNull::Set() 
{
    value = "$NULL";
    state++;
}

std::string ConstantNull::convert(BBlock* out)
{
	Set();

    // Write three address instructions to output
    return value;
}
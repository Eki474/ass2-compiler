#include "../include/Do.h"

Do::Do(Node r)
{}

void Do::Set()
{
	//
    name = "_tDO";
    state++;
}

//Example
//for <- _i < $3

std::string Do::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    Statement::children.front()->convert(out);
    return name;
}
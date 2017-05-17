#include "../include/For.h"

For::For(Node r)
{}

void For::Set()
{
	//
    name = "_t" + std::to_string(nCounter++);
    state++;
}

//Example
//for <- _i < $3

std::string For::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdFor("for", '0', "0", rhs->convert(out)));
    return name;
}
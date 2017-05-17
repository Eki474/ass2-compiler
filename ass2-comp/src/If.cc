#include "../include/If.h"

If::If(Node r)
{}

void If::Set()
{
	//
    name = "_t" + std::to_string(nCounter++);
    state++;
}

//Example
//if <- _t1 < $3

std::string If::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdIf("if", '0', "0", rhs->convert(out)));
    return name;
}
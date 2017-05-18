#include "../include/Neg.h"

Neg::Neg(Node r)
{}

void Neg::Set()
{
	rhs = Statement::children.front();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Neg::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdNeg(name, '-', "$0", rhs->convert(out)));
    return name;
}

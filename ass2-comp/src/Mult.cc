#include "../include/Mult.h"

Mult::Mult(Node r)
{}

void Mult::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Mult::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdMult(name, '*', lhs->convert(out), rhs->convert(out)));
    return name;
}

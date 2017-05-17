#include "../include/Pow.h"

Pow::Pow(Node r)
{}

void Pow::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Pow::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdPow(name, '^', lhs->convert(out), rhs->convert(out)));
    return name;
}

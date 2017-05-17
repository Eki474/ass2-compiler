#include "../include/Inf.h"

Inf::Inf(Node r)
{}

void Inf::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Inf::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdInf(name, '<', lhs->convert(out), rhs->convert(out)));
    return name;
}

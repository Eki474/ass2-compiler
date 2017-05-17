#include "../include/Minus.h"

Minus::Minus(Node r)
{}

void Minus::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Minus::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdMinus(name, '-', lhs->convert(out), rhs->convert(out)));
    return name;
}

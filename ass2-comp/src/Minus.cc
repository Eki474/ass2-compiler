#include "../include/Minus.h"

Minus::Minus(Node r)
{}

void Minus::Set()
{
	std::cout << children.size() << std::endl;
	lhs = children.front();
	rhs = children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Minus::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    ThreeAdMinus expr = ThreeAdMinus(name, '-', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}

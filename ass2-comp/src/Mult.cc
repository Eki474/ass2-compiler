#include "../include/Mult.h"

Mult::Mult(Node r)
{}

void Mult::Set()
{
	std::cout << children.size() << std::endl;
	lhs = children.front();
	rhs = children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Mult::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    ThreeAdMult expr = ThreeAdMult(name, '*', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}

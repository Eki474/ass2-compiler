#include "../include/Equality.h"

Equality::Equality(Node r)
{}

void Equality::Set()
{
	std::cout << children.size() << std::endl;
	lhs = children.front();
	rhs = children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Equality::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    ThreeAdEquality expr = ThreeAdEquality(name, '=', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}
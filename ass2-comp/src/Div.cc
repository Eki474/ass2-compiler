#include "../include/Div.h"

Div::Div(Node r)
{}

void Div::Set()
{
	std::cout << children.size() << std::endl;
	lhs = children.front();
	rhs = children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Div::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    ThreeAdDiv expr = ThreeAdDiv(name, '/', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}

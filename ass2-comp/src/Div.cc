#include "../include/Div.h"

Div::Div(Node r)
{}

void Div::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Div::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdDiv(name, '/', lhs->convert(out), rhs->convert(out)));
    return name;
}

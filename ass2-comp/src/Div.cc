#include "../include/Div.h"

Div::Div(Node r)
{}

void Div::Set()
{
	std::cout << Statement::children.size() << std::endl;
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Div::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    //ThreeAdDiv expr = ThreeAdDiv(name, '/', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(new ThreeAdDiv(name, '/', lhs->convert(out), rhs->convert(out)));
    return name;
}

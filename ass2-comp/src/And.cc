#include "../include/And.h"

And::And(Node r)
{}

void And::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string And::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdAnd(name, '&', lhs->convert(out), rhs->convert(out)));
    return name;
}

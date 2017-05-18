#include "../include/Or.h"

Or::Or(Node r)
{}

void Or::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Or::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdOr(name, '|', lhs->convert(out), rhs->convert(out)));
    return name;
}

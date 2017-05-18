#include "../include/Equality.h"

Equality::Equality(Node r)
{}

void Equality::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Equality::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdEquality(name, '=', lhs->convert(out), rhs->convert(out)));
    return name;
}
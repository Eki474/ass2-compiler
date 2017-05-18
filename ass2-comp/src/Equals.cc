#include "../include/Equals.h"

Equals::Equals(Node r)
{}

void Equals::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Equals::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdEquals(name, '?', lhs->convert(out), rhs->convert(out)));
    return name;
}

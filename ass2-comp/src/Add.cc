#include "../include/Add.h"

Add::Add(Node r)
{}

void Add::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Add::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdAdd(name, '+', lhs->convert(out), rhs->convert(out)));
    return name;
}
#include "../include/Not.h"

Not::Not(Node r)
{}

void Not::Set()
{
	rhs = Statement::children.front();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Not::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdNot(name, ' ', "not", rhs->convert(out)));
    return name;
}

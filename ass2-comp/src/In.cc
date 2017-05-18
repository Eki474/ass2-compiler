#include "../include/In.h"

In::In(Node r)
{}

void In::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
	state++;
}

std::string In::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdIn("in", ':', lhs->convert(out), rhs->convert(out)));
    return "in";
}
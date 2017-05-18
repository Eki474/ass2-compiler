#include "../include/Diff.h"

Diff::Diff(Node r)
{}

void Diff::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Diff::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdDiff(name, '~', lhs->convert(out), rhs->convert(out)));
    return name;
}

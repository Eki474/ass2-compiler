#include "../include/Concat.h"

Concat::Concat(Node r)
{}

void Concat::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Concat::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdConcat(name, '.', lhs->convert(out), rhs->convert(out)));
    return name;
}

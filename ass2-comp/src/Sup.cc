#include "../include/Sup.h"

Sup::Sup(Node r)
{}

void Sup::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Sup::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdSup(name, '>', lhs->convert(out), rhs->convert(out)));
    return name;
}

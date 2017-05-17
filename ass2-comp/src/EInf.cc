#include "../include/EInf.h"

EInf::EInf(Node r)
{}

void EInf::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string EInf::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdEInf(name, 'i', lhs->convert(out), rhs->convert(out)));
    return name;
}

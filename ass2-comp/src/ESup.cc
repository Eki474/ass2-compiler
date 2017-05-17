#include "../include/ESup.h"

ESup::ESup(Node r)
{}

void ESup::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string ESup::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdESup(name, 's', lhs->convert(out), rhs->convert(out)));
    return name;
}

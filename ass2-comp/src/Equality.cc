#include "../include/Equality.h"

Equality::Equality(Node r)
{}

void Equality::Set()
{
	std::cout << Statement::children.size() << std::endl;
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Equality::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    //ThreeAdEquality expr = ThreeAdEquality(name, '=', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(new ThreeAdEquality(name, '=', lhs->convert(out), rhs->convert(out)));
    return name;
}
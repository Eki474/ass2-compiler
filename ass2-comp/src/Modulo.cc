#include "../include/Modulo.h"

Modulo::Modulo(Node r)
{}

void Modulo::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Modulo::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdModulo(name, '%', lhs->convert(out), rhs->convert(out)));
    return name;
}

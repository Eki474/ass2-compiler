#include "../include/Function.h"

Function::Function(Node r)
: Sname(new LuaString(r.children.front().value))
{}

void Function::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back()->getChildren().front();
    name = "_" + Sname->attributeString;
    state++;
}

std::string Function::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdFunction("function", ',', lhs->convert(out), rhs->convert(out)));
    return name;
}
#include "../include/FunctionCall.h"

FunctionCall::FunctionCall(Node r)
{}

void FunctionCall::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    state++;
}

std::string FunctionCall::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    out->instructions.push_back(new ThreeAdFunctionCall("function", ',', lhs->convert(out), rhs->convert(out)));
    return name;
}
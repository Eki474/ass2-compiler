#include "../include/Div.h"

Div::Div(Node r)
{}

void Div::Set(Expression* lhs, Expression* rhs)
{
		this->lhs = lhs;
		this->rhs = rhs;
        name = "[_t" + std::to_string(nCounter++) + "]";
        state++;
}

std::string Div::convert(BBlock* out)
{
    // Write three address instructions to output
    ThreeAdDiv expr = ThreeAdDiv(name, '/', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}

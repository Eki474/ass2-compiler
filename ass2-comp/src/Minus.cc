#include "../include/Minus.h"

Minus::Minus(Node r)
{}

void Minus::Set(Expression* lhs, Expression* rhs)
{
		this->lhs = lhs;
		this->rhs = rhs;
        name = "[_t" + std::to_string(nCounter++) + "]";
        state++;
}

std::string Minus::convert(BBlock* out)
{
    // Write three address instructions to output
    ThreeAdMinus expr = ThreeAdMinus(name, '-', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}

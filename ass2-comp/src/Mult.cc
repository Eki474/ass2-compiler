#include "../include/Mult.h"

Mult::Mult(Node r)
{}

void Mult::Set(Expression* lhs, Expression* rhs)
{
		this->lhs = lhs;
		this->rhs = rhs;
        name = "[_t" + std::to_string(nCounter++) + "]";
        state++;
}

std::string Mult::convert(BBlock* out)
{
    // Write three address instructions to output
    ThreeAd expr = ThreeAd(name, '*', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}

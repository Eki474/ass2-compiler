#include "../include/Add.h"

Add::Add(Node r)
{}

void Add::Set(Expression* lhs, Expression* rhs)
{
		this->lhs = lhs;
		this->rhs = rhs;
        name = "[_t" + std::to_string(nCounter++) + "]";
        state++;
}

std::string Add::convert(BBlock* out)
{
    // Write three address instructions to output
    ThreeAd expr = ThreeAd(name, '+', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}
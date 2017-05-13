#include "../include/Equality.h"

Equality::Equality(Node r)
{}

void Equality::Set(Expression* lhs, Expression* rhs)
{
		this->lhs = lhs;
		this->rhs = rhs;
        name = "[_t" + std::to_string(nCounter++) + "]";
        state++;
}

std::string Equality::convert(BBlock* out)
{
    // Write three address instructions to output
    ThreeAdEquality expr = ThreeAdEquality(name, '=', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}
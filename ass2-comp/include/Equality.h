#ifndef EQUALITY_H
#define EQUALITY_H

#include "Expression.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdEquality.h"

class Equality : public Expression
{
    public: 
        Expression *lhs, *rhs;

        Equality(Node r);

        void Set(Expression* lhs, Expression* rhs);

        std::string convert(BBlock* out);
};

#endif
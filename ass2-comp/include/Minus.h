#ifndef MINUS_H
#define MINUS_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>

class Minus : public Expression
{
    public: 
        Expression *lhs, *rhs;

        Minus(Node r);

        void Set(Expression* lhs, Expression* rhs);

        std::string convert(BBlock* out);
};

#endif
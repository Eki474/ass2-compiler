#ifndef ADD_H
#define ADD_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>

class Add : public Expression
{
public:
        Expression *lhs, *rhs;

        Add(Node r);

        void Set(Expression* lhs, Expression* rhs);

        std::string convert(BBlock* out);

};

#endif
#ifndef MINUS_H
#define MINUS_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdMinus.h"

class Minus : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Minus(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
#include <string>

#ifndef EQUALITY_H
#define EQUALITY_H

#include "Expression.h"
#include "BBlock.h"
#include "ThreeAdEquality.h"
#include "Statement.h"

class Equality : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Equality(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
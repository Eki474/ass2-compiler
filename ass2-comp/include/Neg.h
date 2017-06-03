#include <list>
#include <string>

#ifndef NEG_H
#define NEG_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdNeg.h"

class Neg : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement* rhs;

        Neg(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
#include <list>
#include <string>

#ifndef MULT_H
#define MULT_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdMult.h"

class Mult : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Mult(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
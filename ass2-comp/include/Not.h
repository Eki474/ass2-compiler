#include <list>
#include <string>

#ifndef NOT_H
#define NOT_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdNot.h"

class Not : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement* rhs;

        Not(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
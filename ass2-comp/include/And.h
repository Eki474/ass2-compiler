#include <list>
#include <string>

#ifndef AND_H
#define AND_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdAnd.h"

class And : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        And(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
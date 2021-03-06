#include <list>
#include <string>

#ifndef INF_H
#define INF_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdInf.h"

class Inf : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Inf(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
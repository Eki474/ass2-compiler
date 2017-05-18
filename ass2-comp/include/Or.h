#ifndef OR_H
#define OR_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdOr.h"

class Or : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Or(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
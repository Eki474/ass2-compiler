#include <list>
#include <string>

#ifndef POW_H
#define POW_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdPow.h"

class Pow : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Pow(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
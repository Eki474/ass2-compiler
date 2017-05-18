#ifndef EINF_H
#define EINF_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdEInf.h"

class EInf : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        EInf(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
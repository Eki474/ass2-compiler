#ifndef CONCAT_H
#define CONCAT_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdConcat.h"

class Concat : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Concat(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
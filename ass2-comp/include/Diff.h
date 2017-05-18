#ifndef DIFF_H
#define DIFF_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdDiff.h"

class Diff : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Diff(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
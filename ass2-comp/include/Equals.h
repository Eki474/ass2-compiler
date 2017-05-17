#ifndef EQUALS_H
#define EQUALS_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdEquals.h"

class Equals : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Equals(Node r);

        void Set();

        std::string convert(BBlock* out);
};

#endif
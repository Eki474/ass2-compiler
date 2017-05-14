#ifndef DIV_H
#define DIV_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdDiv.h"

class Div : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Div(Node r);

        void Set();

        std::string convert(BBlock* out);
};

#endif
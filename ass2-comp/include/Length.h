#ifndef LENGTH_H
#define LENGTH_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdLength.h"

class Length : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement* rhs;

        Length(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
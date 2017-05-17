#ifndef ESUP_H
#define ESUP_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdESup.h"

class ESup : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        ESup(Node r);

        void Set();

        std::string convert(BBlock* out);
};

#endif
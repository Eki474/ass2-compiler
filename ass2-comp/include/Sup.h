#include <list>
#include <string>

#ifndef SUP_H
#define SUP_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdSup.h"

class Sup : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Sup(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
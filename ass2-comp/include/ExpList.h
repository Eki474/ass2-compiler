#ifndef EXPLIST_H
#define EXPLIST_H

#include "Expression.h"
#include "Node.h"
#include "BBlock.h"
#include "ThreeAdExpList.h"
#include <string>

class ExpList : public Expression
{
    public: 
        std::string size;

        ExpList(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
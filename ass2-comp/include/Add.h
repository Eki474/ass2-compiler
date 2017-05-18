#ifndef ADD_H
#define ADD_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdAdd.h"

class Add : public Expression
{
public:
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Add(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
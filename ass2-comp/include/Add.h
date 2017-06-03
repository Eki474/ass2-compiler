#include <list>
#include <string>

#ifndef ADD_H
#define ADD_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdAdd.h"

class Add : public Expression
{
public:
        Statement *lhs, *rhs;

        Add(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
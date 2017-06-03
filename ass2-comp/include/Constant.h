#include <list>
#include <string>

#ifndef CONSTANT_H
#define CONSTANT_H

#include "Expression.h"
#include "Node.h"
#include "Statement.h"
#include "LuaInt.h"
#include "LuaValue.h"
#include "BBlock.h"

class Constant : public Expression
{
    public: 
        std::string value;
        LuaInt* Svalue;

        Constant(Node r);

        std::string convert(BBlock** out);

        void Set();
};

#endif
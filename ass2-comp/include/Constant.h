#ifndef CONSTANT_H
#define CONSTANT_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "LuaInt.h"
#include "LuaValue.h"
#include "BBlock.h"
#include <string>

class Constant : public Expression
{
    public: 
        std::string value;
        LuaInt* Svalue;

        Constant(Node r);

        std::string convert(BBlock* out);

        void Set(int v);
};

#endif
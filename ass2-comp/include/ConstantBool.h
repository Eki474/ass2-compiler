#ifndef CONSTANTBOOL_H
#define CONSTANTBOOL_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "LuaBool.h"
#include "LuaValue.h"
#include "BBlock.h"
#include <string>

class ConstantBool : public Expression
{
    public: 
        std::string value;
        LuaBool* Svalue;

        ConstantBool(Node r);

        std::string convert(BBlock* out);

        void Set();
};

#endif
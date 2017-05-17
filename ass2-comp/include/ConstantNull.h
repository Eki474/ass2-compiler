#ifndef CONSTANTNULL_H
#define CONSTANTNULL_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "LuaEmpty.h"
#include "LuaValue.h"
#include "BBlock.h"
#include <string>

class ConstantNull : public Expression
{
    public: 
        std::string value;
        LuaEmpty* Svalue;

        ConstantNull(Node r);

        std::string convert(BBlock* out);

        void Set();
};

#endif
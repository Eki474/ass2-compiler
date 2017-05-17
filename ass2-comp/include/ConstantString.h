#ifndef CONSTANTSTRING_H
#define CONSTANTSTRING_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "LuaString.h"
#include "LuaValue.h"
#include "BBlock.h"
#include <string>

class ConstantString : public Statement
{
    public: 
        std::string value;
        LuaString* Svalue;

        ConstantString(Node r);

        std::string convert(BBlock* out);

        void Set();
};

#endif
#include <list>
#include <string>

#ifndef CONSTANTSTRING_H
#define CONSTANTSTRING_H

#include "Node.h"
#include "Statement.h"
#include "LuaString.h"
#include "LuaValue.h"
#include "BBlock.h"

class ConstantString : public Statement
{
    public: 
        std::string value;
        LuaString* Svalue;

        ConstantString(Node r);

        std::string convert(BBlock** out);

        void Set();
};

#endif
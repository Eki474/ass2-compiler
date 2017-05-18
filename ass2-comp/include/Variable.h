#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expression.h"
#include "Statement.h"
#include "Node.h"
#include "BBlock.h"
#include <string>
#include <cstring>
#include <typeinfo>

class Variable : public Expression
{
    public: 
        std::string var_name;
        std::string name;
        std::string complete_name;

        Variable(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
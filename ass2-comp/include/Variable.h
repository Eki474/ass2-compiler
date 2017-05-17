#ifndef VARIABLE_H
#define VARIABLE_H

#include "Expression.h"
#include "Node.h"
#include "BBlock.h"
#include <string>

class Variable : public Expression
{
    public: 
        std::string var_name;
        std::string name;

        Variable(Node r);

        void Set();

        std::string convert(BBlock* out);
};

#endif
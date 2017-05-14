#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"

#include <iostream>

class Expression : public Statement
{
protected:
        static int nCounter;
public:
        std::string name;

        Expression();
        Expression(Node r);
        virtual std::string convert(BBlock*) = 0;
};

#endif
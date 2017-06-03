#include <list>

#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Node.h"
#include "Statement.h"
#include "BBlock.h"

#include <iostream>

class Expression : public Statement
{
public:

        Expression();
        Expression(Node r);
        virtual std::string convert(BBlock** out)
        {
        	return Statement::children.front()->convert(out);
        }
};

#endif
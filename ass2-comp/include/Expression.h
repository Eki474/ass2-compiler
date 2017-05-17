#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"

#include <iostream>

class Expression : public Statement
{
public:

        Expression();
        Expression(Node r);
        virtual std::string convert(BBlock* out)
        {
        	std::cout << "Expression passed" << std::endl;
        	return Statement::children.front()->convert(out);
        }
};

#endif
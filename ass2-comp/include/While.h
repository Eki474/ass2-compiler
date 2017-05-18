#ifndef WHILE_H
#define WHILE_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdWhile.h"

class While : public Statement
{
public:
		Statement *lhs, *rhs;

        While(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
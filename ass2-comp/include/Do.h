#include <list>
#include <string>

#ifndef DO_H
#define DO_H

#include "Node.h"
#include "Statement.h"
#include "BBlock.h"

class Do : public Statement
{
public:
		Statement *lhs, *rhs;
		char op;

        Do(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
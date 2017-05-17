#ifndef IF_H
#define IF_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdIf.h"

class If : public Statement
{
public:
		Statement *lhs, *rhs;
		char op;

        If(Node r);

        void Set();

        std::string convert(BBlock* out);

};

#endif
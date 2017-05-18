#ifndef DO_H
#define DO_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
//#include "ThreeAdDo.h"

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
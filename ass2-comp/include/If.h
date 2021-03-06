#include <list>
#include <string>

#ifndef IF_H
#define IF_H

#include "Node.h"
#include "Statement.h"
#include "BBlock.h"

class If : public Statement
{
public:
		Statement *true_branch, *false_branch, *cond;

        If(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
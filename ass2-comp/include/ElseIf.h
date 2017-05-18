#ifndef ELSEIF_H
#define ELSEIF_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdElseIf.h"

class ElseIf : public Statement
{
public:
		Statement *true_branch, *cond;

        ElseIf(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
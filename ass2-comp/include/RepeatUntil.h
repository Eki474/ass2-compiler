#include <list>
#include <string>

#ifndef REPEATUNTIL_H
#define REPEATUNTIL_H

#include "Node.h"
#include "Statement.h"
#include "BBlock.h"

class RepeatUntil : public Statement
{
public:
		Statement *lhs, *rhs;

        RepeatUntil(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
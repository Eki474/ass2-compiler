#include <list>
#include <string>

#ifndef FOR_H
#define FOR_H

#include "Node.h"
#include "Statement.h"
#include "BBlock.h"

class For : public Statement
{
public:
		Statement *lhs, *rhs;

        For(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
#ifndef FOR_H
#define FOR_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdFor.h"

class For : public Statement
{
public:
		Statement *lhs, *rhs;

        For(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
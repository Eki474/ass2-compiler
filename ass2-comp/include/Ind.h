#include <list>
#include <string>

#ifndef IND_H
#define IND_H

#include "Node.h"
#include "Statement.h"
#include "BBlock.h"
#include "ThreeAdInd.h"

class Ind : public Statement
{
public:
		Statement *lhs, *rhs;
		std::string indice;

        Ind(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
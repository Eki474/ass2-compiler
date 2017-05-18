#ifndef IND_H
#define IND_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
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
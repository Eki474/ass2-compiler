#ifndef ELSEIFLIST_H
#define ELSEIFLIST_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdIf.h"

class ElseIfList : public Statement
{
public:

        ElseIfList(Node r);

        void Set();

        std::string convert(BBlock** out);

};

#endif
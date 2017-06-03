#include <string>

#ifndef NAMELIST_H
#define NAMELIST_H

#include "Expression.h"
#include "Node.h"
#include "BBlock.h"
#include "ThreeAdNameList.h"

class NameList : public Expression
{
    public: 
        std::string size;

        NameList(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
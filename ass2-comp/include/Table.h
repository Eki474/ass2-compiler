#include <string>

#ifndef TABLE_H
#define TABLE_H

#include "Expression.h"
#include "Node.h"
#include "BBlock.h"
#include "ThreeAdTable.h"

class Table : public Expression
{
    public: 
        std::string name;

        Table(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
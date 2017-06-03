#include <string>

#ifndef FIELDLIST_H
#define FIELDLIST_H

#include "Expression.h"
#include "Node.h"
#include "BBlock.h"
#include "ThreeAdTable.h"

class FieldList : public Expression
{
    public: 
        std::string size;
        Statement* first_elem;
        std::string name;

        FieldList(Node r);

        void Set();

        std::string convert(BBlock** out);
};

#endif
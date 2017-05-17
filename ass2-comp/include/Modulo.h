#ifndef MODULO_H
#define MODULO_H

#include "Expression.h"
#include "Node.h"
#include <list>
#include "Statement.h"
#include "BBlock.h"
#include <string>
#include "ThreeAdModulo.h"

class Modulo : public Expression
{
    public: 
        //Expression *lhs, *rhs;
        Statement *lhs, *rhs;

        Modulo(Node r);

        void Set();

        std::string convert(BBlock* out);
};

#endif
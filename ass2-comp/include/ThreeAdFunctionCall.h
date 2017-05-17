#ifndef THREEADFUNCTIONCALL_H
#define THREEADFUNCTIONCALL_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdFunctionCall : public ThreeAd
{
public: 

    ThreeAdFunctionCall(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
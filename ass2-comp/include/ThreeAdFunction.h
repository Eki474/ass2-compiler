#ifndef THREEADFUNCTION_H
#define THREEADFUNCTION_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdFunction : public ThreeAd
{
public: 

    ThreeAdFunction(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
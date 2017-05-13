#ifndef THREEADMULT_H
#define THREEADMULT_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdMult : public ThreeAd
{
public: 

    ThreeAdMult(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
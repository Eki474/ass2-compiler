#ifndef THREEADNEG_H
#define THREEADNEG_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdNeg : public ThreeAd
{
public: 

    ThreeAdNeg(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
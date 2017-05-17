#ifndef THREEADPOW_H
#define THREEADPOW_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdPow : public ThreeAd
{
public: 

    ThreeAdPow(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
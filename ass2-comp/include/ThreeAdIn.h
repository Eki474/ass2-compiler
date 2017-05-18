#ifndef THREEADIN_H
#define THREEADIN_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdIn : public ThreeAd
{
public: 

    ThreeAdIn(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
#ifndef THREEADDIV_H
#define THREEADDIV_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdDiv : public ThreeAd
{
public: 

    ThreeAdDiv(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
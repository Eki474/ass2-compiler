#ifndef THREEADNOT_H
#define THREEADNOT_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdNot : public ThreeAd
{
public: 

    ThreeAdNot(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
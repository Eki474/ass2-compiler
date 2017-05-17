#ifndef THREEADEQUALS_H
#define THREEADEQUALS_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdEquals : public ThreeAd
{
public: 

    ThreeAdEquals(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
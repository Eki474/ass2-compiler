#ifndef THREEADWHILE_H
#define THREEADWHILE_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdWhile : public ThreeAd
{
public: 

    ThreeAdWhile(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
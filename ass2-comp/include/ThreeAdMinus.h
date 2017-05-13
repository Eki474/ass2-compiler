#ifndef THREEADMINUS_H
#define THREEADMINUS_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdMinus : public ThreeAd
{
public: 

    ThreeAdMinus(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
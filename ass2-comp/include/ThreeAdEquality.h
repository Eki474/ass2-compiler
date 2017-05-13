#ifndef THREEADEQUALITY_H
#define THREEADEQUALITY_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdEquality : public ThreeAd
{
public: 

    ThreeAdEquality(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
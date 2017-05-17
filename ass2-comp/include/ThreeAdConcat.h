#ifndef THREEADCONCAT_H
#define THREEADCONCAT_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdConcat : public ThreeAd
{
public: 

    ThreeAdConcat(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
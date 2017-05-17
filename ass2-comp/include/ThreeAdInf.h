#ifndef THREEADINF_H
#define THREEADINF_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdInf : public ThreeAd
{
public: 

    ThreeAdInf(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
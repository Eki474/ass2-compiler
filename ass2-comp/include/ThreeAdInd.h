#ifndef THREEADIND_H
#define THREEADIND_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdInd : public ThreeAd
{
public: 

    ThreeAdInd(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
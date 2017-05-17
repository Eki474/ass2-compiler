#ifndef THREEADDIFF_H
#define THREEADDIFF_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdDiff : public ThreeAd
{
public: 

    ThreeAdDiff(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
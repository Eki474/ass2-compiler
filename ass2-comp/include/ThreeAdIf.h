#ifndef THREEADIF_H
#define THREEADIF_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdIf : public ThreeAd
{
public: 

    ThreeAdIf(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
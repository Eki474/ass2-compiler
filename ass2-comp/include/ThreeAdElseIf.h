#ifndef THREEADELSEIF_H
#define THREEADELSEIF_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdElseIf : public ThreeAd
{
public: 

    ThreeAdElseIf(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
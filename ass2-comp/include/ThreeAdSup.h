#ifndef THREEADSUP_H
#define THREEADSUP_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdSup : public ThreeAd
{
public: 

    ThreeAdSup(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
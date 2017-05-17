#ifndef THREEADFOR_H
#define THREEADFOR_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdFor : public ThreeAd
{
public: 

    ThreeAdFor(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
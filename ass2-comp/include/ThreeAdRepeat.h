#ifndef THREEADREPEAT_H
#define THREEADREPEAT_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdRepeat : public ThreeAd
{
public: 

    ThreeAdRepeat(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
#ifndef THREEADADD_H
#define THREEADADD_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdAdd : public ThreeAd
{
public: 

    ThreeAdAdd(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
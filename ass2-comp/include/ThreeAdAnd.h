#ifndef THREEADAND_H
#define THREEADAND_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdAnd : public ThreeAd
{
public: 

    ThreeAdAnd(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
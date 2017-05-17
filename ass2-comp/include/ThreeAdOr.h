#ifndef THREEADOR_H
#define THREEADOR_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdOr : public ThreeAd
{
public: 

    ThreeAdOr(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
#ifndef THREEADMODULO_H
#define THREEADMODULO_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdModulo : public ThreeAd
{
public: 

    ThreeAdModulo(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
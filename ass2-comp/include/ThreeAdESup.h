#ifndef THREEADESUP_H
#define THREEADESUP_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdESup : public ThreeAd
{
public: 

    ThreeAdESup(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
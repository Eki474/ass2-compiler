#ifndef THREEADEINF_H
#define THREEADEINF_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdEInf : public ThreeAd
{
public: 

    ThreeAdEInf(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
#ifndef THREEADLENGTH_H
#define THREEADLENGTH_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdLength : public ThreeAd
{
public: 

    ThreeAdLength(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
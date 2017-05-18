#ifndef THREEADEXPLIST_H
#define THREEADEXPLIST_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdExpList : public ThreeAd
{
public: 

    ThreeAdExpList(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
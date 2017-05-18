#ifndef THREEADNAMELIST_H
#define THREEADNAMELIST_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdNameList : public ThreeAd
{
public: 

    ThreeAdNameList(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
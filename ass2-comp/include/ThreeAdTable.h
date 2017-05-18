#ifndef THREEADTABLE_H
#define THREEADTABLE_H

#include "ThreeAd.h"

/************* Three Address Instructions *************/
class ThreeAdTable : public ThreeAd
{
public: 

    ThreeAdTable(std::string name, char op, std::string lhs, std::string rhs);

    std::string assembly();
};

#endif
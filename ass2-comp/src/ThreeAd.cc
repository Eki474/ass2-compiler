#include "../include/ThreeAd.h"

long ThreeAd::counter = 1;

/************* Three Address Instructions *************/
ThreeAd::ThreeAd(std::string name, char op, std::string lhs, std::string rhs) :
                name(name), op(op), lhs(lhs), rhs(rhs)
    {
        id = counter++;
    }

std::string ThreeAd::dump()
{
        return name + " <- " + lhs + " " + op + " " + rhs;
}
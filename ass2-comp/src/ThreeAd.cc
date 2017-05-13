#include "../include/ThreeAd.h"

long ThreeAd::counter = 1;

/************* Three Address Instructions *************/
ThreeAd::ThreeAd(std::string name, char op, std::string lhs, std::string rhs) :
                name(name), op(op), lhs(lhs), rhs(rhs)
    {
        id = counter++;
    }

std::string ThreeAd::assembly()
{
    //TODO: to be remove
    switch(op)
    {
        case 'a':
            return assignment();
        default: 
            std::cerr << "error: unknown operation";
            return "";
    }
}

std::string ThreeAd::assignment()
{
    //assembly a
    /*
    * movq "name", "lhs";
    */

    return "\"movq "+name+", "+lhs+"\\n\\t\"";
}

std::string ThreeAd::dump()
{
        return name + " <- " + lhs + " " + op + " " + rhs;
}
#include "../include/ThreeAdEquality.h"

ThreeAdEquality::ThreeAdEquality(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdEquality::assembly()
{
    //assembly a
    /*
    * movq "name", "lhs";
    */

    return "\"movq "+name+", "+lhs+"\\n\\t\"\n";
}
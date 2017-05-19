#include "../include/ThreeAdNeg.h"

ThreeAdNeg::ThreeAdNeg(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdNeg::assembly()
{
    //assembly NEGATIVE NUMBERS
    /*
    * movq "rhs", %rax;
    * negq %rax; 
    * movq %rax, "name";
    */

    return "\"movq "+rhs+", %%rax\\n\\t\"\n"
    		"\"negq %%rax\\n\\t\"\n"
    		"\"movq %%rax, "+name+"\\n\\t\"\n";
}
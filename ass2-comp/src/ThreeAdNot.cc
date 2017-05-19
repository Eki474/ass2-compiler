#include "../include/ThreeAdNot.h"

ThreeAdNot::ThreeAdNot(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdNot::assembly()
{
    //assembly NOT
    /*
    * movq "rhs", %rax;
    * notq %rax; 
    * movq %rax, "name";
    */

    return "\"movq "+rhs+", %%rax\\n\\t\"\n"
    		"\"notq %%rax\\n\\t\"\n"
    		"\"movq %%rax, "+name+"\\n\\t\"\n";
}
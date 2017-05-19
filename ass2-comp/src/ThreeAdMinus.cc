#include "../include/ThreeAdMinus.h"

ThreeAdMinus::ThreeAdMinus(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdMinus::assembly()
{
    //assembly -
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * subq %rax, %rbx; 
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"subq %%rax, %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
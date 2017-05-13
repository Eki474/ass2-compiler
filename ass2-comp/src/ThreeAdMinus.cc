#include "../include/ThreeAdMinus.h"

ThreeAdMinus::ThreeAdMinus(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdMinus::assembly()
{
    //WARNING TODO THIS IS ASSEMBLY FOR +
    //assembly +
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * addq %rax, %rbx; 
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n\"movq "+rhs+", %%rbx\\n\\t\"\n\"addq %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}
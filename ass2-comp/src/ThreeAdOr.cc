#include "../include/ThreeAdOr.h"

ThreeAdOr::ThreeAdOr(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdOr::assembly()
{
    //assembly |
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * orq %rax, %rbx; 
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"orq %%rax, %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
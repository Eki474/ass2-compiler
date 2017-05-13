#include "../include/ThreeAdEquality.h"

ThreeAdEquality::ThreeAdEquality(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdEquality::assembly()
{
    //assembly =
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * cmp %rax, %rbx;
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n \"movq "+rhs+", %%rbx\\n\\t\"\n\"cmp %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}
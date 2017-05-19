#include "../include/ThreeAdAnd.h"

ThreeAdAnd::ThreeAdAnd(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdAnd::assembly()
{
    //assembly &
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * andq %rax, %rbx; 
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"andq %%rax, %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
#include "../include/ThreeAdDiv.h"

ThreeAdDiv::ThreeAdDiv(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdDiv::assembly()
{
    //assembly /
    /*
    * movq "lhs", %rax; 
    * movq "rhs", %rbx; 
    * idivq %rbx;
    * movq %rax, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"idivq %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
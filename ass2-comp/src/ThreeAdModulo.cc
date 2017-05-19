#include "../include/ThreeAdModulo.h"

ThreeAdModulo::ThreeAdModulo(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdModulo::assembly()
{
    //assembly %
    /*
    * movq "lhs", %rax; 
    * movq "rhs", %rbx; 
    * idivq %rbx;
    * movq %rdx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"idivq %%rbx\\n\\t\"\n"
            "\"movq %%rdx, "+name+"\\n\\t\"\n";
}
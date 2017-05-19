#include "../include/ThreeAdMult.h"

ThreeAdMult::ThreeAdMult(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdMult::assembly()
{
    //assembly *
    /*
    * movq "lhs", %rax; 
    * movq "rhs", %rbx; 
    * imulq %rbx;
    * movq %rax, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"imulq %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
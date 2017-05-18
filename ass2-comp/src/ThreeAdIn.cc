#include "../include/ThreeAdIn.h"

ThreeAdIn::ThreeAdIn(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdIn::assembly()
{
    //assembly IN
    /*
    * TODO
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n\"movq "+rhs+", %%rbx\\n\\t\"\n\"addq %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}
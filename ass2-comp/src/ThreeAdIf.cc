#include "../include/ThreeAdIf.h"

ThreeAdIf::ThreeAdIf(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdIf::assembly()
{
    //assembly IF
    /*
    * REDO
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n\"movq "+rhs+", %%rbx\\n\\t\"\n\"addq %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}
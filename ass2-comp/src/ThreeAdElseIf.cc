#include "../include/ThreeAdElseIf.h"

ThreeAdElseIf::ThreeAdElseIf(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdElseIf::assembly()
{
    //assembly ELSE IF
    /*
    * REDO
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
    		"\"movq "+rhs+", %%rbx\\n\\t\"\n"
    		"\"addq %%rax, %%rbx\\n\\t\"\n"
    		"\"movq %%rbx, "+name+"\\n\\t\"\n";
}
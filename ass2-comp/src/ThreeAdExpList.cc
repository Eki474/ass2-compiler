#include "../include/ThreeAdExpList.h"

ThreeAdExpList::ThreeAdExpList(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdExpList::assembly()
{
    //assembly EXPLIST
    /*
    * REDO
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n\"movq "+rhs+", %%rbx\\n\\t\"\n\"addq %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}
#include "../include/ThreeAdEquals.h"

ThreeAdEquals::ThreeAdEquals(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdEquals::assembly()
{
    //assembly =
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * cmp %rax, %rbx;
    * movq %rbx, "name";
    */
    //correponding jump je

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"cmp %%rax, %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
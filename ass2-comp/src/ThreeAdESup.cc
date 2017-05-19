#include "../include/ThreeAdESup.h"

ThreeAdESup::ThreeAdESup(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdESup::assembly()
{
    ///assembly <=
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * cmp %rax, %rbx;
    * movq %rbx, "name";
    */
    //corresponding jump : jge

    return "\"movq "+lhs+", %%rax\\n\\t\"\n"
            "\"movq "+rhs+", %%rbx\\n\\t\"\n"
            "\"cmp %%rax, %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
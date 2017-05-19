#include "../include/ThreeAdEInf.h"

ThreeAdEInf::ThreeAdEInf(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdEInf::assembly()
{
    ///assembly <=
    /*
    * movq "lhs", %rbx;
    * movq "rhs", %rax;
    * cmp %rax, %rbx; 			-> the operand are switched because a<=b equivalent to b>a
    * movq %rbx, "name";
    */
    //corresponding jump : jg

    return "\"movq "+lhs+", %%rbx\\n\\t\"\n"
            "\"movq "+rhs+", %%rax\\n\\t\"\n"
            "\"cmp %%rax, %%rbx\\n\\t\"\n"
            "\"movq %%rbx, "+name+"\\n\\t\"\n";
}
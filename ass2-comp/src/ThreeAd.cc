#include "../include/ThreeAd.h"

long ThreeAd::counter = 1;

/************* Three Address Instructions *************/
ThreeAd::ThreeAd(std::string name, char op, std::string lhs, std::string rhs) :
                name(name), op(op), lhs(lhs), rhs(rhs)
    {
        id = counter++;
    }

std::string ThreeAd::assembly()
{
    //TODO: avoid big switch case
    switch(op)
    {
        case '+':
            return add();
        case '*':
            return mult();
        case 'a':
            return assignment();
        case '=':
            return equality();
        default: 
            std::cerr << "error: unknown operation";
            return "";
    }
}

std::string ThreeAd::add()
{
    //assembly +
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * addq %rax, %rbx; 
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n\"movq "+rhs+", %%rbx\\n\\t\"\n\"addq %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}

std::string ThreeAd::mult()
{
    //assembly *
    /*
    * movq "lhs", %rax; 
    * movq "rhs", %rbx"; 
    * imulq %rbx;
    * movq %rax, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n\"movq "+rhs+", %%rbx\\n\\t\"\n\"imulq %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}

std::string ThreeAd::equality()
{
    //assembly =
    /*
    * movq "lhs", %rax;
    * movq "rhs", %rbx;
    * cmp %rax, %rbx;
    * movq %rbx, "name";
    */

    return "\"movq "+lhs+", %%rax\\n\\t\"\n \"movq "+rhs+", %%rbx\\n\\t\"\n\"cmp %%rax, %%rbx\\n\\t\"\n\"movq %%rbx, "+name+"\\n\\t\"\n";
}

std::string ThreeAd::assignment()
{
    //assembly a
    /*
    * movq "name", "lhs";
    */

    return "\"movq "+name+", "+lhs+"\\n\\t\"";
}

std::string ThreeAd::dump()
{
        return name + " <- " + lhs + " " + op + " " + rhs;
}
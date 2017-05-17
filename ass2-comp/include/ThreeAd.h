#ifndef THREEAD_H
#define THREEAD_H

#include <string>
#include <iostream>

/************* Three Address Instructions *************/
class ThreeAd
{
public: 
    std::string name,lhs,rhs;
    char op;
    long id;

    static long counter;

    ThreeAd(std::string name, char op, std::string lhs, std::string rhs);

    virtual std::string assembly() = 0;
    //TODO: delete this one
    std::string assignment();

    std::string dump();
};

#endif
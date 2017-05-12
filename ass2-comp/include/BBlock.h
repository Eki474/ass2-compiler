#ifndef BBLOCK_H
#define BBLOCK_H

#include "ThreeAd.h"
#include <list>
#include <string>
#include <iostream>
#include <sstream>

/* Basic Blocks */
class BBlock
{
private:
        static int nCounter;
public:
        std::list<ThreeAd> instructions;
        BBlock *tExit, *fExit;
        std::string name;

        BBlock();

        std::string assembly_convert();

        void dumpCFG(std::ofstream& myfile);
};

#endif
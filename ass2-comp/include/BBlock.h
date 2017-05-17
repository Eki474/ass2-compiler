#ifndef BBLOCK_H
#define BBLOCK_H

#include "ThreeAd.h"
#include <list>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
/*TODO: change pointers by unique_ptr (include <memory>)*/

/* Basic Blocks */
class BBlock
{
private:
        static int nCounter;
public:
        std::list<ThreeAd*> instructions;
        BBlock *tExit, *fExit;
        std::string name;

        BBlock();

        std::string assembly_convert();

        void dumpCFG(std::ofstream& myfile);
};

#endif
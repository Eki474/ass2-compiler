#include <list>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

#ifndef BBLOCK_H
#define BBLOCK_H

#include "ThreeAd.h"

/* Basic Blocks */
class BBlock
{
private:
        static int nCounter;
        static std::list<std::string> read_blocks;
        static std::list<std::string> compiled_blocks;
public:
        std::list<ThreeAd*> instructions;
        BBlock *tExit, *fExit;
        std::string name;

        BBlock();

        std::string assembly_convert();

        void dumpCFG(std::ofstream& myfile);

        bool already_read(std::string n);
        bool already_compiled(std::string n);
};

#endif
#include "../include/Args.h"

Args::Args(Node r)
{}

void Args::Set()
{
	name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Args::convert(BBlock* out)
{
	Set();
    // Write three address instructions to output
    return Statement::children.front()->convert(out);
}
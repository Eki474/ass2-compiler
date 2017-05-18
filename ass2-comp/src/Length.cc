#include "../include/Length.h"

Length::Length(Node r)
{}

void Length::Set()
{
	rhs = Statement::children.front();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Length::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdLength(name, ' ', "length", rhs->convert(out)));
    return name;
}

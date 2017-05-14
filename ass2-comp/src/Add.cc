#include "../include/Add.h"

Add::Add(Node r)
{}

void Add::Set()
{
    std::cout << children.size() << std::endl;
	lhs = children.front();;
	rhs = children.back();
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Add::convert(BBlock* out)
{
	std::cout << "Add" << std::endl;
	Set();
    // Write three address instructions to output
    ThreeAdAdd expr = ThreeAdAdd(name, '+', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(expr);
    return name;
}
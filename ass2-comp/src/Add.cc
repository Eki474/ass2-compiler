#include "../include/Add.h"

Add::Add(Node r)
{}

void Add::Set()
{
    if(!Statement::children.empty())
    {
    	lhs = Statement::children.front();
    	rhs = Statement::children.back();
    }else
        std::cout << "list empty" << std::endl;
    name = "_t" + std::to_string(nCounter++);
    state++;
}

std::string Add::convert(BBlock* out)
{
	std::cout << "Add" << std::endl;
	Set();
    // Write three address instructions to output
    //ThreeAdAdd expr = ThreeAdAdd(name, '+', lhs->convert(out), rhs->convert(out));
    out->instructions.push_back(new ThreeAdAdd(name, '+', lhs->convert(out), rhs->convert(out)));
    return name;
}
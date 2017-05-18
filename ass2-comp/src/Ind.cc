#include "../include/Ind.h"

Ind::Ind(Node r) : indice(r.value)
{}

void Ind::Set()
{
	lhs = Statement::children.front();
	if(Statement::children.size() > 2)
	{
		Statement* tmp = Statement::children.back();
		Statement::children.pop_back();
		rhs = Statement::children.back();
		Statement::children.push_back(tmp);
	}else
	{
		rhs = Statement::children.back();
	}
    state++;
}

//Example
//for <- start , end

std::string Ind::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdInd("cond", ',', lhs->convert(out), rhs->convert(out)));
    if(Statement::children.size() > 2)
    	Statement::children.back()->convert(out);
    return "cond";
}
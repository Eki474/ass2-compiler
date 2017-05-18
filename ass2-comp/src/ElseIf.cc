#include "../include/ElseIf.h"

ElseIf::ElseIf(Node r)
{}

void ElseIf::Set()
{
	cond = Statement::children.front();
    true_branch = Statement::children.back();
    state++;
}

std::string ElseIf::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdElseIf("elseif", ',', cond->convert(out), "then"));

    BBlock* true_out = new BBlock();

    //true block setting
    (*out)->tExit = true_out;
    //true block filling 
    true_branch->convert(&true_out);
    //exit block setting 
    true_out->tExit = (*out)->fExit;

    return name;
}
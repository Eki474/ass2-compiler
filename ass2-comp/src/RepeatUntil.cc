#include "../include/RepeatUntil.h"

RepeatUntil::RepeatUntil(Node r)
{}

void RepeatUntil::Set()
{
	lhs = Statement::children.back();
	rhs = Statement::children.front();
    state++;
}

//Example
//for <- ind , do

std::string RepeatUntil::convert(BBlock** out)
{
	Set();

    //Blocks creation
    BBlock* true_out = new BBlock();
    BBlock* exit_out = new BBlock();

    //true block setting
    (*out)->tExit = true_out;

    //true block filling 
    rhs->convert(&true_out);
    lhs->convert(&true_out);

    //loop block setting 
    true_out->tExit = true_out;
    //exit block setting 
    true_out->fExit = exit_out;

    //setting current block
	(*out) = exit_out;

    return "repeat";
}
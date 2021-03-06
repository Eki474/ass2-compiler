#include "../include/While.h"

While::While(Node r)
{}

void While::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    state++;
}

std::string While::convert(BBlock** out)
{
	Set();

    //Blocks creation
    BBlock* true_out = new BBlock();
    BBlock* exit_out = new BBlock();

    //true block setting
    (*out)->tExit = true_out;

    //true block filling 
    lhs->convert(&true_out);
    rhs->convert(&true_out);

    //loop block setting 
    true_out->tExit = true_out;
    //exit block setting 
    true_out->fExit = exit_out;

    //setting current block
	(*out) = exit_out;

    return "while";
}
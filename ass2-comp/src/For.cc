#include "../include/For.h"

For::For(Node r)
{}

void For::Set()
{
	lhs = Statement::children.front();
	rhs = Statement::children.back();
    state++;
}

//Example
//for <- ind , do

std::string For::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    lhs->convert(out);
    (*out)->instructions.push_back(new ThreeAdFor("for", ',', "cond", "do"));

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

    return "for";
}
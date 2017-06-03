#include "../include/If.h"

If::If(Node r)
{}

void If::Set()
{
	if(Statement::children.size() == 3)
	{
		Statement** tmp[] = {&cond, &true_branch, &false_branch};
		int j = 0;
		for(auto i : Statement::children)
		{
			*(tmp[j]) = i;
			j++;
		}
	}else
	{
		cond = Statement::children.front();
        true_branch = Statement::children.back();
	}
    state++;
}

std::string If::convert(BBlock** out)
{
	Set();

    //retrieve exit_out from previous if existing (if the "if" is within a for)
    BBlock* exit_out;
    BBlock* new_out;
    if((*out)->tExit == NULL)
    {
        exit_out = new BBlock();
        new_out = (*out);
    }
    else 
    {
        exit_out = (*out)->tExit;
        new_out = new BBlock();
        (*out)->tExit = new_out;
    }

    cond->convert(&new_out);

	//blocks creation
    BBlock* true_out = new BBlock();

    //true block setting
    new_out->tExit = true_out;
    //true block filling 
    true_branch->convert(&true_out);
    //exit block setting 
    true_out->tExit = exit_out;

    if(false_branch == NULL)
    {
        new_out->fExit = exit_out;
    }else
    {
        BBlock* false_out = new BBlock();
        new_out->fExit = false_out;
        false_branch->convert(&false_out);
        false_out->tExit = exit_out;
    }

    //setting current block
    (*out) = exit_out;
    return "if";
}
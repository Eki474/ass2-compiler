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
		Statement** tmp[] = {&cond, &true_branch, &elseif_branch, &false_branch};
		int j = 0;
		for(auto i : Statement::children)
		{
			*(tmp[j]) = i;
			j++;
		}
	}
    state++;
}

std::string If::convert(BBlock** out)
{
	Set();

    //retrieve exit_out from previous if existing (if the "if" is within a for)
    BBlock* exit_out;
    if((*out)->tExit == NULL)
        exit_out = new BBlock();
    else 
        exit_out = (*out)->tExit;

    BBlock* new_out = new BBlock();
    (*out)->tExit = new_out;
    // Write three address instructions to output
    new_out->instructions.push_back(new ThreeAdIf("if", ',', cond->convert(out), "then"));

	//blocks creation
    BBlock* true_out = new BBlock();;
    BBlock* false_out = new BBlock();
    BBlock* elseif_out = new BBlock();

    //true block setting
    new_out->tExit = true_out;
    //true block filling 
    true_branch->convert(&true_out);
    //exit block setting 
    true_out->tExit = exit_out;

    if(elseif_branch != NULL && false_branch != NULL) //with elseif and else branches
    {
    	//elseif block setting
	    new_out->fExit = elseif_out;
	    //exit block setting 
    	elseif_out->fExit = false_out;
	    //elseif block filling
	    elseif_branch->convert(&elseif_out);

        //false block filling
        false_branch->convert(&false_out);
        //exit block setting 
        false_out->tExit = exit_out;
    }else if(elseif_branch == NULL && false_branch != NULL) //with else or elseif branch
    {
    	//false block setting
        new_out->fExit = false_out;
        //exit block setting 
        false_out->fExit = exit_out;
        //false block filling
        false_branch->convert(&false_out);
        //exit block setting 
        false_out->fExit = exit_out;
    }else if(elseif_branch == NULL && false_branch == NULL) //without elseif and else branches
    {
    	//exit block setting 
    	new_out->fExit = exit_out;
    }

    //setting current block
    (*out) = exit_out;
    return "if";
}
#include "../include/ElseIfList.h"

ElseIfList::ElseIfList(Node r)
{}

void ElseIfList::Set()
{
    state++;
}

std::string ElseIfList::convert(BBlock** out)
{
	Set();
    // Write three address instructions to output
    (*out)->instructions.push_back(new ThreeAdIf("elseif list", '-', std::to_string(Statement::children.size()), "else if"));

    BBlock** true_out;
    BBlock** new_out;
    BBlock* exit_out = (*out)->fExit;
    (*new_out) = new BBlock();
    (*true_out) = new BBlock();

    (*out)->tExit = (*true_out);

    for(auto i : Statement::children)
    {
        i->convert(true_out);
        (*true_out)->fExit = (*new_out);
        if(i != Statement::children.back())
        {
            (*true_out) = (*new_out);
            (*new_out) = new BBlock();
        }
    }
    (*true_out)->fExit = exit_out;
    (*out)->fExit = NULL;
    return name;
}
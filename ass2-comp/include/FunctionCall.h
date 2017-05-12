#ifndef FUNCTIONCALL_H
#define FUNCTIONCALL_H

#include "Node.h"
#include <list>
#include "Statement.h"


class FunctionCall : public Statement 
{	
public:
	FunctionCall(Node r);
};

#endif
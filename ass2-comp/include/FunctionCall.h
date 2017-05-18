#ifndef FUNCTIONCALL_H
#define FUNCTIONCALL_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "ThreeAdFunctionCall.h"
#include <typeinfo>


class FunctionCall : public Statement 
{	
public:
	Statement *lhs, *rhs;

	FunctionCall(Node r);

	void Set();

	std::string convert(BBlock** out);
};

#endif
#ifndef FUNCTNAME_H
#define FUNCTNAME_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "LuaString.h"
#include "LuaValue.h"
#include <string>
#include <iostream>
#include "ThreeAdFunction.h"

class Function : public Statement 
{	
private:
	LuaString* Sname;
public:
	Statement *lhs, *rhs;
	std::string name;

	Function(Node r);

	void Set();

	std::string convert(BBlock** out);
};

#endif
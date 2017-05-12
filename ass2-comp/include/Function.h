#ifndef FUNCTNAME_H
#define FUNCTNAME_H

#include "Node.h"
#include <list>
#include "Statement.h"
#include "LuaString.h"
#include "LuaValue.h"
#include <string>
#include <iostream>

class Function : public Statement 
{	
private:
	LuaString* name;
public:
	Function(Node r);
};

#endif
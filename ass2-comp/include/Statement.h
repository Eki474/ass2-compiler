#ifndef STATEMENT_H
#define STATEMENT_H

#include "Node.h"
#include "LuaEmpty.h"
#include "LuaValue.h"
#include "BBlock.h"
#include <list>
#include <sstream>

class Statement 
{	
protected:
	std::list<Statement*> children;
	std::list<std::string> var_list;
	int state = 0; 
public:
	Statement();
	Statement(Node r);
	virtual LuaValue* consume()
	{
		for(auto s : children)
			s->consume();
		return new LuaEmpty();
	}
	void addChildren(Statement* s);
	std::list<Statement*> getChildren();
	std::string convert(BBlock*);
};

#endif
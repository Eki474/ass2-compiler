#ifndef STATEMENT_H
#define STATEMENT_H

#include "Node.h"
#include "LuaEmpty.h"
#include "LuaValue.h"
#include "BBlock.h"
#include <list>
#include <sstream>
#include <string>

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
	virtual std::string convert(BBlock* out)
	{
		std::cout << "Statement" << std::endl;
		std::cout << children.size() << std::endl;
		for(auto i : children)
			i->convert(out);
		return "";
	}
};

#endif
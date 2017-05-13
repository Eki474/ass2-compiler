#include "../include/Statement.h"

Statement::Statement() 
{}

Statement::Statement(Node r)
{}

void Statement::addChildren(Statement* s)
{
	children.push_back(s);
}

std::list<Statement*> Statement::getChildren()
{
	return children;
}

std::string Statement::convert(BBlock*)
{}
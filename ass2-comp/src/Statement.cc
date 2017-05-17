#include "../include/Statement.h"

int Statement::nCounter = 0;

Statement::Statement() 
{}

Statement::Statement(Node r) : name("")
{}

void Statement::addChildren(Statement* s)
{
	children.push_back(s);
}

std::list<Statement*> Statement::getChildren()
{
	return children;
}
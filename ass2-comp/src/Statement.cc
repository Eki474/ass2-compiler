#include "../include/Statement.h"

int Statement::nCounter = 0;
std::list<std::string> Statement::var_list;

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
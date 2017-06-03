#include <list>
#include <string>
#include <iostream>

#ifndef IN_H
#define IN_H

#include "Node.h"
#include "Statement.h"
#include "ThreeAdIn.h"

class In : public Statement 
{
public:
	Statement *lhs, *rhs;

	In(Node r);

	void Set();

	std::string convert(BBlock** out);
};

#endif
#ifndef ARGS_H
#define ARGS_H

#include "Node.h"
#include <list>
#include "Statement.h"

class Args : public Statement 
{	
public:
	Args(Node r);

	void Set();

    std::string convert(BBlock** out);
};

#endif
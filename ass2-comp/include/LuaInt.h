#ifndef LUAINT_H
#define LUAINT_H

#include "LuaValue.h"
#include <iostream>

class LuaInt : public LuaValue
{
public:
	LuaInt(int val);
};

#endif
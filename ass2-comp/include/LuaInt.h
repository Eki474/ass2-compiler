#include <iostream>

#ifndef LUAINT_H
#define LUAINT_H

#include "LuaValue.h"

class LuaInt : public LuaValue
{
public:
	LuaInt(int val);
};

#endif
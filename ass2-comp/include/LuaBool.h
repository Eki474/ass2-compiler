#ifndef LUABOOL_H
#define LUABOOL_H

#include "LuaValue.h"
#include <iostream>

class LuaBool : public LuaValue
{
public:
	LuaBool(bool val);
};

#endif
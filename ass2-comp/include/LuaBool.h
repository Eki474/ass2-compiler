#include <iostream>

#ifndef LUABOOL_H
#define LUABOOL_H

#include "LuaValue.h"

class LuaBool : public LuaValue
{
public:
	LuaBool(bool val);
};

#endif
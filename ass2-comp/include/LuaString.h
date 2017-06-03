#include <string>

#ifndef LUASTRING_H
#define LUASTRING_H

#include "LuaValue.h"

class LuaString : public LuaValue
{
public:
	LuaString(std::string val);
};

#endif
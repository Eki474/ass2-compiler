#ifndef LUASTRING_H
#define LUASTRING_H

#include "LuaValue.h"
#include <string>

class LuaString : public LuaValue
{
public:
	LuaString(std::string val);
};

#endif
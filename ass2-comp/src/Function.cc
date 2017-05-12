#include "../include/Function.h"

Function::Function(Node r)
: name(new LuaString(r.value))
{}
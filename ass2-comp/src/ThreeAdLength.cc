#include "../include/ThreeAdLength.h"

ThreeAdLength::ThreeAdLength(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdLength::assembly()
{
    //assembly LENGTH
    /*
	* push edi
	* sub ecx, ecx 
	* mov edi, [esp+8]
	* not ecx 
	* sub al, al 
	* cld 
	* repne scasb 
	* not ecx 
	* pop edi 
	* lea eax, [ecx-1]
	* ret
    */

    return "\"strlen"+name+":\\n\\t\"\n"
			"\"push %%rdi\\n\\t\"\n"
			"\"sub %%rcx, %%rcx\\n\\t\"\n"
			"\"movq %%rdi, (%%rsp+8)\\n\\t\"\n"
			"\"not %%rcx\\n\\t\"\n"
			"\"sub %%al, %%al\\n\\t\"\n" 
			"\"cld\\n\\t\"\n" 
			"\"repne scasb\\n\\t\"\n" 
			"\"not %%rcx\\n\\t\"\n" 
			"\"pop %%rdi\\n\\t\"\n" 
			"\"lea %%rax, (%%rcx-1)\\n\\t\"\n"
			"\"ret\\n\\t\"\n";
}
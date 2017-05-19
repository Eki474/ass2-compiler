#include "../include/ThreeAdFunctionCall.h"

ThreeAdFunctionCall::ThreeAdFunctionCall(std::string name, char op, std::string lhs, std::string rhs) : 
						ThreeAd(name, op, lhs, rhs)
    {}


std::string ThreeAdFunctionCall::assembly()
{
    //assembly FunctionCall
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
    /*
    * mov edx, len 			-> message length
    * mov ecx, msg 			-> message to write
    * mov ebx, 1 			-> file description (stdout)
    * mov eax, 4 			-> system call number (sys_write)
    * int 0x80 				-> call kernel
    */
    if(lhs.compare("print") == 0)
    {
    	return "\"strlen:\\n\\t\"\n"
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
				"\"ret\\n\\t\"\n"
    			"\"movq %%rdx, %%rax\\n\\t\"\n"
    			"\"movq %%rcx, "+rhs+"\\n\\t\"\n"
    			"\"movq %%rbx, $1\\n\\t\"\n"
    			"\"movq %%rax, $4\\n\\t\"\n"
    			"\"call _syscall\\n\\t\"\n";
    }

    return "";
}
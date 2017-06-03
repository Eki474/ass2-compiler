int main() {
long 
print=0, _t0=0, _t1=0, _t2=0, _t3=0, _t4=0, _t5=0, _t6=0;
asm(
"blk0:\n\t"
"movq $22, %%rax\n\t"
"movq $11, %%rbx\n\t"
"subq %%rax, %%rbx\n\t"
"movq %%rbx, _t5\n\t"
"movq _t5, %%rax\n\t"
"movq $1, %%rbx\n\t"
"idivq %%rbx\n\t"
"movq %%rbx, _t4\n\t"
"movq _t4, %%rax\n\t"
"movq $44, %%rbx\n\t"
"imulq %%rbx\n\t"
"movq %%rbx, _t3\n\t"
"movq $13, %%rax\n\t"
"movq _t3, %%rbx\n\t"
"addq %%rax, %%rbx\n\t"
"movq %%rbx, _t2\n\t"
"strlen:\n\t"
"push %%rdi\n\t"
"sub %%rcx, %%rcx\n\t"
"movq %%rdi, (%%rsp+8)\n\t"
"not %%rcx\n\t"
"sub %%al, %%al\n\t"
"cld\n\t"
"repne scasb\n\t"
"not %%rcx\n\t"
"pop %%rdi\n\t"
"lea %%rax, (%%rcx-1)\n\t"
"ret\n\t"
"movq %%rdx, %%rax\n\t"
"movq %%rcx, (_t2)\n\t"
"movq %%rbx, $1\n\t"
"movq %%rax, $4\n\t"
"call _syscall\n\t"
: [print] "=g" (print),
[_t0] "=g" (_t0),
[_t1] "=g" (_t1),
[_t2] "=g" (_t2),
[_t3] "=g" (_t3),
[_t4] "=g" (_t4),
[_t5] "=g" (_t5),
[_t6] "=g" (_t6)
);
}

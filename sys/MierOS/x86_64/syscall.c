#include <mieros/syscall.h>

sysarg_t syscall0(sysarg_t call) {
	sysarg_t ret;
	asm volatile("int $0x8F" : "=a"(ret) : "a"(call));
	return ret;
}

sysarg_t syscall1(sysarg_t call, sysarg_t arg0) {
	sysarg_t ret;
	asm volatile("int $0x8F" : "=a"(ret) : "a"(call), "b"(arg0));
	return ret;
}

sysarg_t syscall2(sysarg_t call, sysarg_t arg0, sysarg_t arg1) {
	sysarg_t ret;
	asm volatile("int $0x8F" : "=a"(ret) : "a"(call), "b"(arg0), "c"(arg1));
	return ret;
}

sysarg_t syscall3(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2) {
	sysarg_t ret;
	asm volatile("int $0x8F" : "=a"(ret) : "a"(call), "b"(arg0), "c"(arg1), "d"(arg2));
	return ret;
}

sysarg_t syscall4(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2, sysarg_t arg3) {
	sysarg_t ret;
        asm volatile("int $0x8F" : "=a"(ret) : "a"(call), "b"(arg0), "c"(arg1), "d"(arg2), "S"(arg3));
        return ret;
}

sysarg_t syscall5(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2, sysarg_t arg3, sysarg_t arg4) {
	sysarg_t ret;
        asm volatile("int $0x8F" : "=a"(ret) : "a"(call), "b"(arg0), "c"(arg1), "d"(arg2), "S"(arg3), "D"(arg4));
        return ret;
}

sysarg_t syscall6(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2, sysarg_t arg3, sysarg_t arg4, sysarg_t arg5) {
	sysarg_t ret;
        asm volatile("mov %0, %%r8; int $0x8F" : "=a"(ret) : "a"(call), "b"(arg0), "c"(arg1), "d"(arg2), "S"(arg3), "D"(arg4), "m"(arg5) : "r8");
        return ret;
}


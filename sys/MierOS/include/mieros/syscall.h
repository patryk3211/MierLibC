#ifndef _MIEROS_SYSCALL_H
#define _MIEROS_SYSCALL_H

#include <stdint.h>

#ifdef x86_64
typedef uint64_t sysarg_t;
#endif

extern sysarg_t syscall0(sysarg_t call);
extern sysarg_t syscall1(sysarg_t call, sysarg_t arg0);
extern sysarg_t syscall2(sysarg_t call, sysarg_t arg0, sysarg_t arg1);
extern sysarg_t syscall3(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2);
extern sysarg_t syscall4(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2, sysarg_t arg3);
extern sysarg_t syscall5(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2, sysarg_t arg3, sysarg_t arg4);
extern sysarg_t syscall6(sysarg_t call, sysarg_t arg0, sysarg_t arg1, sysarg_t arg2, sysarg_t arg3, sysarg_t arg4, sysarg_t arg5);

#endif


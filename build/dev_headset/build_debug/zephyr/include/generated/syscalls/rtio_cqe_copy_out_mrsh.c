/* auto-generated by gen_syscalls.py, don't edit */

#include <syscalls/rtio.h>

extern int z_vrfy_rtio_cqe_copy_out(struct rtio * r, struct rtio_cqe * cqes, size_t cqe_count, k_timeout_t timeout);
uintptr_t z_mrsh_rtio_cqe_copy_out(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg5;	/* unused */
	union { uintptr_t x; struct rtio * val; } parm0;
	parm0.x = arg0;
	union { uintptr_t x; struct rtio_cqe * val; } parm1;
	parm1.x = arg1;
	union { uintptr_t x; size_t val; } parm2;
	parm2.x = arg2;
	union { struct { uintptr_t lo, hi; } split; k_timeout_t val; } parm3;
	parm3.split.lo = arg3;
	parm3.split.hi = arg4;
	int ret = z_vrfy_rtio_cqe_copy_out(parm0.val, parm1.val, parm2.val, parm3.val);
	_current->syscall_frame = NULL;
	return (uintptr_t) ret;
}


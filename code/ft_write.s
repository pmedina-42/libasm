SECTION .text
extern	___error
global _ft_write


_ft_write:
	mov		rax, 0x2000004
	syscall
	cmp		rax, -1
	je		error
	ret

error:
	push	rax
	call	___error
	pop		r12
	mov		[rax], r12
	mov		rax, -1
	ret
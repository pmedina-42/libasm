SECTION .text
extern	___error
global _ft_write


_ft_write:
	mov		rax, 0x2000004		; Store write's memdir in rax
	syscall						; Call write
	jc		error				; jc jumps if syscall returns an error (1)
	ret							; If syscall returns 0, return nbytes

error:
	push	rax					; Push rax to the stack to save it
	call	___error			; Call error function
	mov		rdi, rax			; Copy ret value of error function to rdi
	pop		rax					; Restore the previous value of rax
	mov		[rdi], rax			; Copy rax to base rdi because error is 32bit
	mov		rax, -1				; Write must return -1 if an error occurrs
	ret
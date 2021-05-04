SECTION .text
extern	___error
global _ft_read


_ft_read:
	mov		rax, 0x2000003		; Store read's memdir in rax
	syscall						; Call read and store nbytes or error in rax
	jc		error				; jc jumps if syscall returns an error (1)
	ret							; If syscall returns 0, return nbytes

error:
	push	rax					; Push rax to the stack to save it
	call	___error			; Call error function
	mov		rdi, rax			; Copy ret value of error function to rdi
	pop		rax					; Restore the previous value of rax
	mov		[rdi], rax			; Copy rax to base rdi because error is 32bit
	mov		rax, -1				; Read must return -1 if an error occurrs
	ret
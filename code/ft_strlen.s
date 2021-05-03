section .text
global _ft_strlen

_ft_strlen:
	xor		rax, rax				; Rax = 0
	.loop:
		cmp	BYTE [rdi + rax], 0		; Compare the byte-sized value of rdi's current position with 0
		jz	return					; If zero, return
		inc	rax						; Increment the value of rax
		jmp	.loop					; Start the loop again

return:
	ret								; return(rax)
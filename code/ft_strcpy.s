SECTION .text
global _ft_strcpy

_ft_strcpy:
	xor	rax, rax				; Rax = 0
	.loop:
		mov	cl, [rsi + rax]		; Copy the current position of rsi (2nd arg/src) in cl (tmp reg)
		cmp	cl, 0				; Compare cl and 0
		jz	return				; If zero, return
		mov	[rdi + rax], cl		; Copy cl to the current position of rdi (1st arg/dest)
		inc	rax					; Increment the value of rax
		jmp .loop				; Start the loop again
return:
	xor	cl, cl					; Cl = 0
	mov	[rdi + rax], cl			; Copy 0 to the end of the dest string
	mov	rax, rdi				; Rax = dest
	ret							; return(dest);
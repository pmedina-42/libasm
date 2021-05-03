SECTION .text
global _ft_strcmp

_ft_strcmp:
xor	rax, rax				; Rax = 0
	.loop:
		mov	cl, BYTE[rsi]	; Copy the first byte of the 2nd arg to a tmp reg
		cmp	cl, BYTE[rdi]	; Compare the first byte of the 1st arg to cl
		jne	notequal		; If not equal, jump to not equal tag
		cmp cl, 0			; Compare cl to 0
		jz return			; If zero, return
		inc rsi				; Increment rdi
		inc	rdi				; Increment rsi
		jmp .loop			; Start loop again

notequal:
	mov		al, BYTE[rdi]	; Copy the byte of current rdi to al
	movzx	rax, al			; Copy al to rax with zero extension
	movzx	rcx, cl			; Copy cl to rcx with zero extension
	sub		rax, rcx		; Substracts rcx to rax and the ret value is stored in rax
	jmp		return

return:
	ret
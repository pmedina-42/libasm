SECTION	.text

global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error

_ft_strdup:
	push rdi			; Push the src string in the stack
	call _ft_strlen		; Call the function ft_strlen and store the ret value in rax
	inc rax				; Increment rax because of the \0
	mov rdi, rax		; Copy rax to rdi so malloc takes it as its argument
	call _malloc		; Malloc with the size of strlen + 1
	jc error
	pop rsi				; Pop the pushed rdi to rsi so strcpy takes it as its 2nd arg
	mov rdi, rax		; Same as before so strcpy takes it as arg
	call _ft_strcpy		; Call ft_strcpy and store the ret value in rax, then return
	jmp return

error:
	call ___error
	jmp return

return:
	ret 

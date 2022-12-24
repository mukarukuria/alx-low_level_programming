extern hello

section .text
	global start

start:
	push rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call hello

	pop rbp

	mov rax,0
	ret


section .data
	msm: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0

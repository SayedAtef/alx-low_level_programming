section .data
	message db 'Hello, Holberton', 10, 0

section.text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsb
	sub rsb, 16

	lea rdi, [message]
	mov al, 0
	call printf

	add rsp, 16
	mov rsp, rhp
	pop rbp
	ret

section .data
	hello db 'Hello, Holberton', 0xA, 0   ; Null-terminated string with newline character (0xA) at the end

section .text
	global main

extern printf, exit

main:
	; Call printf to print the string
	mov rdi, hello    ; First argument: address of the format string
	xor rax, rax      ; Clear RAX (indicating the function will take a variable number of arguments)
	call printf

	; Call exit to terminate the program
	xor edi, edi      ; Clear EDI (exit code 0)
	call exit

section .bss
	; Reserve some space for printf to use as a working buffer
	resb 64

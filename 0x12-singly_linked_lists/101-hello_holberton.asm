section .data
    hello db 'Hello, Holberton', 0

section .text
    global _start

extern printf, exit

_start:
    mov rdi, hello
    xor rax, rax
    call printf

    xor edi, edi
    call exit

section .bss
    resb 64
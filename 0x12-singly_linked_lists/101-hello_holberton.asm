section .text
    hello: db "hello\n", 6
    hellolen: equ $-hello

section .text
    global _start

_start:
    mov rax,1
    mov rdi,1
    mov rsi,hello
    mov rdx,hellolen
    syscall

    mov rax,60
    mov rdi,0
    syscall


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
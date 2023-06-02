SECTION .text
extern printf
global main

main:
push rbp

mov rdi, fmt
mov esi, msg
mov rax, 0
call printf wrt ..plt
pop rbp
mov rax,0
ret

SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

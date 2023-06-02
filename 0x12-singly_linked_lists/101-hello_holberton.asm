SECTION .text
extern printf ;part tell the ass this sym exist to be refrence later
global main ;needed for gcc and entrypoit to libc

main:
push rbp	;pushed on the stack

mov rdi, fmt	;parameter for printf
mov esi, msg	;parameter for printf
mov rax, 0
call printf wrt ..plt
pop rbp
mov rax,0
ret

SECTION .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0

SECTION .text
extern printf
global main

main:

push rbp
mov edi, len
mov esi, msg
mov rax, 0
call printf

mov rbp
mov rax, 0
ret

SECTION .data
msg: db "Hello, Holberton", 10
len: db "%s"

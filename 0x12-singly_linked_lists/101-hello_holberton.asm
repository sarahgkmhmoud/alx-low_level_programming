SECTION .text
extern printf
global main

main:

mov esi, msg
mov edi, len
mov eax, 0
call printf
mov eax, 0
ret

SECTION .data
msg: db "Hello, Holberton", 10, 0
len: db "%s", 10, 0

SECTION .text
extern printf
global main

main:

mov eax, 0x4
mov ebx, 1
mov esi, msg
mov edi, len
mov eax, 0
call printf

mov eax, 0
ret

SECTION .data
msg: db "Hello, Holberton", 10
len: db "%s"

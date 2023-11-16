section .data
hello db 'Hello, Holberton',0  ; null-terminated string

section .text
global main
extern printf
main:
mov rdi, hello      ; format string
call printf         ; call printf function

; Exit the program
mov rax, 60         ; syscall: exit
xor rdi, rdi        ; status: 0
syscall

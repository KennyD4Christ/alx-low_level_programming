section .data
hello db 'Hello, Holberton',0  ; null-terminated string

section .text
global main

extern printf

main:
; Call printf
mov rdi, hello
call printf

; Exit the program
mov rax, 60         ; syscall: exit
xor rdi, rdi        ; status: 0
syscall

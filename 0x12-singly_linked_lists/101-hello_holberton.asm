section .data
    hello db 'Hello, Holberton', 0    ; null-terminated string
    format db '%s', 0                 ; format string

section .text
    global main
    extern printf

main:
    mov rdi, format     ; format specifier
    mov rsi, hello      ; argument to print
    xor rax, rax        ; clear any previous value in rax
    call printf         ; call printf function

    ; Exit the program
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall


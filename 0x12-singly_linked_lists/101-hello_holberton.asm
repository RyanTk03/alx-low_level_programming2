section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global main

    extern printf

main:
    ; Prepare the arguments for printf
    mov rdi, format  ; Format string
    mov rsi, hello   ; Pointer to the string
    call printf      ; Call printf

    ; Exit the program
    mov rax, 60       ; syscall: exit
    xor rdi, rdi      ; status: 0
    syscall

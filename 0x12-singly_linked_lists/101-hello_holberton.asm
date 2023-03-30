global main
extern printf

section .data
    hello db 'Hello, Holberton', 0
    fmt db '%s\n', 0

section .text
main:
    ; Prepare arguments to printf
    mov rdi, fmt ; Format string
    mov rsi, hello ; Argument string

    ; Call printf
    xor eax, eax ; Set return value to 0
    call printf

    ; Return from main
    xor eax, eax ; Set return value to 0
    ret


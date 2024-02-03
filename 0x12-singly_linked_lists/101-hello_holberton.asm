section .data
    hello_msg db 'Hello, Holberton', 0
    newline db 10 ; ASCII code for newline

section .text
    global main
    extern printf

main:
    sub rsp, 8  ; Adjust the stack for alignment
    mov rdi, hello_msg
    call printf
    mov rdi, newline
    call printf
    add rsp, 8  ; Restore the stack

    mov eax, 0
    ret


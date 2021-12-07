.data
    fmt: .string "\tASM:\t%d\n"
.text
.globl function2
function2:
    mov     $1,     %ecx
    mov     $0,     %edx

    sub     $8, %rsp
    call    function
    add     $8, %rsp

    lea     fmt(%rip), %rcx
    mov     %eax,   %edx

    sub     $32, %rsp
    call    printf
    add     $32, %rsp

    xor     %eax, %eax
    ret

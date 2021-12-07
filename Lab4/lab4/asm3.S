.globl function3
function3:

        push    $5
        mov     $1,     %ecx
        mov     $2,     %edx
        mov     $3,     %r8d
        mov     $4,     %r9d


        sub     $32,    %rsp
        call    function3cpp
        add     $32,   %rsp

        pop     %rax

        ret


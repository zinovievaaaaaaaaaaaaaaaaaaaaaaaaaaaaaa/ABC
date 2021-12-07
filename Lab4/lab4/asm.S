#ifdef __APPLE__
#define FNNAME(s) _##s
#elif _WIN64
#define FNNAME(s) s
#elif _WIN32
#define FNNAME(s) _##s
#else
#define FNNAME(s) s
#endif

.globl FNNAME(function)
FNNAME(function):
    sub     $8,     %rsp
    mov     %ecx,   %eax
    imul    $5,     %edx
    sub     %edx,   %eax
    add     $1234,  %eax
    add     $8,     %rsp
    ret

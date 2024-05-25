popq %rax
movq %rax, %rdi
movq %rdi, %rdx
popq %rax
add %rax, %rdx
movq %rdx, %rsi
popq %rax
movq %rax, %rdi
movq %rdi, %rdx
popq %rax
movq %rax, %rdi
ret

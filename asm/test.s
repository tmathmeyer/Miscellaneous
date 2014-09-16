	.file	"test.c"
	.text
	.globl	sum
	.type	sum, @function
sum:
.LFB0:
	.cfi_startproc
	leal	(%rdi,%rsi), %eax
	ret
	.cfi_endproc
.LFE0:
	.size	sum, .-sum
	.ident	"GCC: (GNU) 4.8.2 20140206 (prerelease)"
	.section	.note.GNU-stack,"",@progbits

	.file	"VolatileInC.c"
	.option nopic
	.attribute arch, "rv64i2p0_m2p0_a2p0_f2p0_d2p0_c2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	1
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-16
	li	a5,3
	sw	a5,12(sp)
	li	a4,10
.L2:
	lw	a5,12(sp)
	addiw	a5,a5,1
	sw	a5,12(sp)
	addiw	a4,a4,-1
	bnez	a4,.L2
	addi	sp,sp,16
	jr	ra
	.size	main, .-main
	.ident	"GCC: () 9.3.0"

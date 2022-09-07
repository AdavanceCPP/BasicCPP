	.file	"dynamicallocation.c"
	.text
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
.LC0:
	.string	"X"
	.section	.text._ZN4Plot3getEv,"axG",@progbits,_ZN4Plot3getEv,comdat
	.align 2
	.weak	_ZN4Plot3getEv
	.type	_ZN4Plot3getEv, @function
_ZN4Plot3getEv:
.LFB1493:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZNSolsEi@PLT
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1493:
	.size	_ZN4Plot3getEv, .-_ZN4Plot3getEv
	.section	.rodata
.LC1:
	.string	"Default constructor"
	.section	.text._ZN4PlotC2Ev,"axG",@progbits,_ZN4PlotC5Ev,comdat
	.align 2
	.weak	_ZN4PlotC2Ev
	.type	_ZN4PlotC2Ev, @function
_ZN4PlotC2Ev:
.LFB1495:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC1(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movl	$20, (%rax)
	movq	-8(%rbp), %rax
	movl	$30, 4(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1495:
	.size	_ZN4PlotC2Ev, .-_ZN4PlotC2Ev
	.weak	_ZN4PlotC1Ev
	.set	_ZN4PlotC1Ev,_ZN4PlotC2Ev
	.section	.rodata
.LC2:
	.string	"Two arg constructor"
	.section	.text._ZN4PlotC2Eii,"axG",@progbits,_ZN4PlotC5Eii,comdat
	.align 2
	.weak	_ZN4PlotC2Eii
	.type	_ZN4PlotC2Eii, @function
_ZN4PlotC2Eii:
.LFB1498:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	leaq	.LC2(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1498:
	.size	_ZN4PlotC2Eii, .-_ZN4PlotC2Eii
	.weak	_ZN4PlotC1Eii
	.set	_ZN4PlotC1Eii,_ZN4PlotC2Eii
	.section	.rodata
.LC3:
	.string	"One arg constructor"
	.section	.text._ZN4PlotC2Ei,"axG",@progbits,_ZN4PlotC5Ei,comdat
	.align 2
	.weak	_ZN4PlotC2Ei
	.type	_ZN4PlotC2Ei, @function
_ZN4PlotC2Ei:
.LFB1501:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	leaq	.LC3(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	%rax, %rdx
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	movl	$30, 4(%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1501:
	.size	_ZN4PlotC2Ei, .-_ZN4PlotC2Ei
	.weak	_ZN4PlotC1Ei
	.set	_ZN4PlotC1Ei,_ZN4PlotC2Ei
	.text
	.globl	_Z3funv
	.type	_Z3funv, @function
_Z3funv:
.LFB1503:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4PlotC1Ev
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1503:
	.size	_Z3funv, .-_Z3funv
	.globl	main
	.type	main, @function
main:
.LFB1504:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1504
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$32, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	call	_ZN4PlotC1Ev
	movl	$8, %edi
	call	malloc@PLT
	movq	%rax, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4Plot3getEv
	movl	$8, %edi
	call	_Znwm@PLT
.LEHE0:
	movq	%rax, %rbx
	movq	%rbx, %rdi
.LEHB1:
	call	_ZN4PlotC1Ev
.LEHE1:
	movq	%rbx, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZN4Plot3getEv
	movl	$8, %edi
	call	_Znwm@PLT
.LEHE2:
	movq	%rax, %rbx
	movl	$40, %esi
	movq	%rbx, %rdi
.LEHB3:
	call	_ZN4PlotC1Ei
.LEHE3:
	movq	%rbx, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB4:
	call	_ZN4Plot3getEv
	movl	$8, %edi
	call	_Znwm@PLT
.LEHE4:
	movq	%rax, %rbx
	movl	$80, %edx
	movl	$40, %esi
	movq	%rbx, %rdi
.LEHB5:
	call	_ZN4PlotC1Eii
.LEHE5:
	movq	%rbx, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB6:
	call	_ZN4Plot3getEv
	movl	$0, %eax
	movq	-24(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L12
	jmp	.L16
.L13:
	movq	%rax, %r12
	movl	$8, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.L14:
	movq	%rax, %r12
	movl	$8, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.L15:
	movq	%rax, %r12
	movl	$8, %esi
	movq	%rbx, %rdi
	call	_ZdlPvm@PLT
	movq	%r12, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume@PLT
.LEHE6:
.L16:
	call	__stack_chk_fail@PLT
.L12:
	addq	$32, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1504:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1504:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1504-.LLSDACSB1504
.LLSDACSB1504:
	.uleb128 .LEHB0-.LFB1504
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1504
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L13-.LFB1504
	.uleb128 0
	.uleb128 .LEHB2-.LFB1504
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1504
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L14-.LFB1504
	.uleb128 0
	.uleb128 .LEHB4-.LFB1504
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB1504
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L15-.LFB1504
	.uleb128 0
	.uleb128 .LEHB6-.LFB1504
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE1504:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1993:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L19
	cmpl	$65535, -8(%rbp)
	jne	.L19
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rax
	movq	%rax, %rdi
	call	__cxa_atexit@PLT
.L19:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1993:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z3funv, @function
_GLOBAL__sub_I__Z3funv:
.LFB1994:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1994:
	.size	_GLOBAL__sub_I__Z3funv, .-_GLOBAL__sub_I__Z3funv
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z3funv
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits

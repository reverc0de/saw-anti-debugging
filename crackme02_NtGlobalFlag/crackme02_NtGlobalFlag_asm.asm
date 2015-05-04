;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; File:		crackme02_NtGlobalFlag_asm.c
; Description:	Es un crackme que implementa la protección 
; 		anti-debugging basada en NtGlobalFlag
; Date: 	27/04/2015
; Author: 	reverc0de
; Twitter:	@reverc0de
; Site:		www.reverc0de.com
; Github:	https://github.com/reverc0de/saw-anti-debugging	
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

[BITS 32]

global ntglobalfunc

section .text

ntglobalfunc:
	push ebp		;guardamos el estado actual de la pila
	mov ebp,esp
	
	mov eax,[fs:30h]	;Offset hacia el PEB
	mov eax,[eax+68h]	;Offset hacia el campo NtGlobalFlag
	
    	pop ebp			;restauramos el estado anterior de la pila
	ret 			;return eax = NtGlobalFlag
	

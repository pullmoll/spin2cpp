DAT
	org	0
count
	mov	count_i_, #0
L_001_
	mov	OUTA, count_i_
	add	count_i_, #1
	cmps	count_i_, #4 wz
 if_ne	jmp	#L_001_
count_ret
	ret

count_i_
	long	0

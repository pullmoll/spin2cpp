pub main
  coginit(0, @entry, 0)
dat
	org	0
entry

_ident
	mov	_ident_x, arg01
	mov	_ident_x + 1, arg02
	mov	result1, _ident_x
	mov	result2, _ident_x + 1
_ident_ret
	ret

_test
	mov	arg01, #0
	mov	arg02, #0
	call	#_ident
_test_ret
	ret
wrcog
    mov    0-0, 0-0
wrcog_ret
    ret

result1
	long	0
result2
	long	0
COG_BSS_START
	fit	496
	org	COG_BSS_START
_ident_x
	res	2
arg01
	res	1
arg02
	res	1
	fit	496

pub main
  coginit(0, @entry, 0)
dat
	org	0
entry

_main
	mov	dira, #32
	mov	outa, imm_65537_
_main_ret
	ret

imm_65537_
	long	65537
COG_BSS_START
	fit	496
	org	COG_BSS_START
	fit	496

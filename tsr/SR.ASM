cseg    SEGMENT
	assume  cs:cseg,ds:cseg
	org     100h
start:  jmp     init

old_keyio LABEL dword
old_keyio_lo    dw ?
old_keyio_hi    dw ?

keyboard_interceptor    proc far
	assume  ds:nothing
	cmp     ah,85h
	jz      ki
	jmp     old_keyio
ki:     mov     ax,3h
	int     10h
	int     19h
	iret
keyboard_interceptor    endp
	
init:   assume  cs:cseg,ds:cseg
	mov     ax,cs
	mov     ds,ax
	mov     ax,3515h
	int     21h
	mov     di,bx
	mov     si,offset keyboard_interceptor
	mov     cx,((offset init - offset keyboard_interceptor) / 2)
	cld
	repe    cmpsw
	jz      unload
load:   mov     ax,3515h
	int     21h
	mov     [old_keyio_lo],bx
	mov     [old_keyio_hi],es
	mov     dx,offset keyboard_interceptor
	mov     ax,2515h
	int     21h
	mov     es,cs:[2ch]
	mov     ah,49h
	int     21h
	mov     dx,((offset init - offset start + 100h) / 10h + 1)
	mov     ax,3100h
	int     21h
unload: mov     dx,es:[old_keyio_lo]
	mov     ds,es:[old_keyio_hi]
	mov     ax,2515h
	int     21h
	mov     ah,49h
	int     21h
	mov     ax,4c00h
	int     21h
cseg    ENDS
END     start

cseg    SEGMENT
top:    
	assume  cs:cseg,ds:cseg
	org     100h
main    proc
	mov     sp,(((offset bottom - offset top + 80h) SHR 4) * 10h - 2) 
	mov     bx,((offset bottom - offset top + 80h) SHR 4)
	mov     ah,4ah
	int     21h
	mov     ax,3521h
	int     21h
	mov     [old_vec_lo],bx
	mov     [old_vec_hi],es
	mov     dx,offset interceptor
	mov     ax,2521h
	int     21h
	push    cs
	pop     es
	mov     [par3],cs
	mov     [par5],cs
	mov     [par7],cs
	mov     dx,offset path
	mov     bx,offset par1
	mov     ax,4b00h
	int     21h
	lds     dx,cs:[old_vec]
	mov     ax,2521h
	int     21h
	mov     ax,4c00h
	adc     al,0
	int     21h
main    endp

interceptor    proc far
	assume  ds:nothing
djt:    cmp     ah,06h
	jne     djb
	push    bp
	mov     bp,sp
	push    ds
	mov     ds,[bp+12h]
	cmp     byte ptr ds:[01f3ah],055h
	jne     dj0
	mov     byte ptr ds:[01f3ah],0cbh
	mov     word ptr [djt],((offset djb - offset djt - 2) * 100h + 0ebh)
dj0:    pop     ds
	pop     bp
djb:    db      0eah
old_vec LABEL dword
old_vec_lo    dw ?
old_vec_hi    dw ?
interceptor    endp

path    db 'MAIN.EXE'
par1    dw 0000h
par2    dw 0080h
par3    dw ?
par4    dw 005ch
par5    dw ?
par6    dw 006ch
par7    LABEL word

bottom:
cseg    ENDS
END     main

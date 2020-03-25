cseg    SEGMENT
top:    
	assume  cs:cseg,ds:cseg
	org     100h
main    proc
	mov     sp,(((offset bottom - offset top + 80h) SHR 4) * 10h - 2) 
	mov     bx,((offset bottom - offset top + 80h) SHR 4)
	mov     ah,4ah
	int     21h
	mov     ax,3510h
	int     21h
	mov     [old_vec_lo],bx
	mov     [old_vec_hi],es
	mov     dx,offset interceptor
	mov     ax,2510h
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
	mov     ax,2510h
	int     21h
	mov     ax,4c00h
	adc     al,0
	int     21h
main    endp

interceptor    proc far
	assume  ds:nothing
djt:    push    bp
	mov     bp,sp
	push    bx
	push    ds
	cmp     word ptr [bp+0eh],1bh
	jne     dj0
	mov     ds,[bp+10h]
	mov     bx,[bp+0eh]
	cmp     word ptr [bx+01h],45ceh
	jne     dj0
	mov     ds,[bx+12h]
	mov     bx,1102h
	cmp     word ptr [bx],06c7h
	jne     dj0
	cmp     word ptr [bx+2],891bh
	jne     dj0
	mov     word ptr [bx+6],0c2e9h
	mov     byte ptr [bx+8],04h
	mov     word ptr [djt],((offset djb - offset djt - 2) * 100h + 0ebh)
dj0:    pop     ds
	pop     bx
	pop     bp
djb:    db      0eah
old_vec LABEL dword
old_vec_lo    dw ?
old_vec_hi    dw ?
interceptor    endp

path    db 'HKY.EXE'
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

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
	mov     bx,offset data1
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
djt:    cmp     ah,3dh
	jne     djb
	push    ds
	push    cx
	push    bx
	mov     bx,dx
	mov     cx,0ch
jl1:    cmp     word ptr [bx],2e65h
	jne     dj1
	cmp     byte ptr [bx+2],61h
	jne     dj1
	inc     byte ptr [data1]
	jmp     dj0
dj1:    inc     bx
	loop    jl1
	cmp     byte ptr [data1],0
	je      dj0
	mov     bx,dx
	mov     cx,0ch
dl2:    cmp     word ptr [bx],2e74h
	jne     dj3
	cmp     byte ptr [bx+2],61h
	je      dj4
dj3:    inc     bx
	loop    dl2
dj9:    mov     word ptr [djt],((offset djb - offset djt - 2) * 100h + 0ebh)
dj0:    pop     bx
	pop     cx
	pop     ds
djb:    db      0eah
old_vec LABEL dword
old_vec_lo    dw ?
old_vec_hi    dw ?
dj4:    xor     cx,cx
	dec     cx
	xor     bx,bx
dl3:    cmp     word ptr [bx],0eff7h
	jne     dj5
	cmp     word ptr [bx+2],6e65h
	je      dj6
dj5:    inc     bx
	loop    dl3
dj8:    cmp     byte ptr [data2],2
	je      dj9
	inc     byte ptr [data2]
	mov     cx,ds
	add     cx,1000h
	mov     ds,cx
	jmp     dj4
dj6:    mov     cx,600h
dl4:    cmp     word ptr [bx],0eff7h
	jne     dj7
	inc     bx
	inc     bx
	mov     byte ptr [bx],0
	jmp     dl4
dj7:    inc     bx
	loop    dl4
	jmp     dj8
interceptor    endp

path    db 'ULTIMA6.EXE'
data1   db 0        
data2   db 0
par2    dw 0080h
par3    dw ?
par4    dw 005ch
par5    dw ?
par6    dw 006ch
par7    LABEL word

bottom:
cseg    ENDS
END     main

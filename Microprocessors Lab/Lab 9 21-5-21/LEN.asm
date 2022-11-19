assume cs:code,ds:data
data segment
strg db "sakthivel$"
msg db "the lenght of the string is:$ "
data ends
code segment
start:
mov ax,data
mov ds,ax
mov ax,0000h
mov cx,0000h
mov al,"$"
lea si,strg
loop1:
mov ah,[si]
cmp al,ah
je ter
inc cx
inc si
jmp loop1
ter:
mov dx,offset msg
mov ah,09h
int 21h
mov dx,0000h
mov dl,cl
add dl,30h
mov ah,02h
int 21h
mov ax,4c00h
int 21h
hlt
code ends
end start
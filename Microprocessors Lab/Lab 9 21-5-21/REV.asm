assume cs:code,ds:data,es:data
data segment
str1 db "sakthivel$"
strlen1 dw $-str1
strrev db 20 dup(?)
data ends
code segment
start:
mov ax,data
mov ds,ax
mov es,ax
mov cx,strlen1
add cx,-2
lea si,str1
lea di,strrev
add si, strlen1
add si,-2
l1:
mov al,[si]
mov [di],al
dec si
inc di
loop l1
mov al,[si]
mov [di],al
inc di
mov dl,'$'
mov [di],dl
print:
mov ah,09h
lea dx, strrev
int 21h
exit:
mov ax,4c00h
int 21h
hlt
code ends
end start
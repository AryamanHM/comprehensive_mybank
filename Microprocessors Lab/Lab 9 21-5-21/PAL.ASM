assume cs:code,ds:data
data segment
block1 db 'malayalm'
msg1 db "it is palindrome $"
msg2 db "it is not plaindrome $"
block2 db ?
data ends

print macro msg
mov ah,09h
lea dx,msg
int 21h
int 3h
endm

code segment
start:
mov ax,data
mov ds,ax
lea si,block1
lea di,block2+8
mov cx,00009h
back:
cld
lodsb
std
stosb 
loop back
lea si,block1
lea di,block2
mov cx,0009h
     cld
repz cmpsb
jnz skip
print msg1
skip:
print msg2
code ends
end start
end
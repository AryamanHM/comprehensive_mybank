MOV SI,0200H
MOV DH,02H
L3:
MOV DI,0300H
MOV CL,02H
L2:
MOV DL,02H
MOV BP,0000H
MOV AX,0000H
SAHF
L1:
MOV AL,[SI]
MOV CH,[DI]
MUL CH
ADD BP,AX
INC SI
ADD DI,02H
DEC DL
JNZ L1
SUB DI,03H
SUB SI,02H
MOV [BX],BP
ADD BX,02H
DEC CL
JNZ L2
ADD SI,02H
DEC DH
JNZ L3

MOV SI,0400H
MOV DI,0500H
MOV CL,04H
MOV BX,0002H
L4:MOV AX,[SI]
MUL BX;
MOV [DI],AX
ADD SI,0002H
ADD DI,0002H
DEC CL
JNZ L4
INT 3
CODE ENDS
END START
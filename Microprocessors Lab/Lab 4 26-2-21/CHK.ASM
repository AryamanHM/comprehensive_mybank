ASSUME CS:CODE, DS:DATA
DATA SEGMENT
ARRAY DB 99H,12H,56H,45H,36H
DATA ENDS
CODE SEGMENT
START:MOV AX,DATA
    MOV DS,AX
    LEA SI,ARRAY
    MOV BL,45H
    MOV CL,05H
    LOOP1:CMP BL,[SI]
        JNE NEXT
        MOV DX,SI
        NEXT:INC SI
            DEC CL
            JNZ LOOP1
    INT 3
CODE ENDS
END START
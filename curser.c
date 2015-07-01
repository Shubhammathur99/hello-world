;--------------------------------------------;
    ;current  curser  location;
    ;formula= X+Y*col;
;--------------------------------------------;
BITS 32
movcurser:
pusha
xor eax,eax
mov ecx,cols
mov al,bl
mul ecx
add al,bl
mov ebx,eax
;--------------------------------------;
	;   Set low byte index to VGA register ;
	;--------------------------------------;
	mov al,0x0f
	mov dx,03D4
	out dx,al
	mov al,bl
	mov dx,03D4
	out dx,al
	;--------------------------------------;
	;   Set high byte index to VGA register ;
	;--------------------------------------;
 mov al,0x0e
 mov dx,03D4
 mov dx,al
 mov al,bh
 mov dx,03D4
 mov dx,al
 popa
 ret


    

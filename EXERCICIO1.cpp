#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char texto[60];
	printf("Digite uma string: \n");
	gets(texto);
	strupr(texto);
	puts(texto);
	strlwr(texto);
	puts(texto);
}

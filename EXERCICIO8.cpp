#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

main(){
	int x;
	char texto[60];
	puts("Digite um texto (maximo 60 caracteres):");
	gets(texto);
	for (x=0; x<strlen(texto);x++){
		strupr(texto);
		printf("%cT", texto[x]);
	}
	getch();
}

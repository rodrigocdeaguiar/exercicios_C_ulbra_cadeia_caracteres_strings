#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char texto1[60], texto2[60], texto3[60];
	int len1, len2, len3;
	 puts("Digite uma palavra ou um texto (max. 60 caracteres): ");
	 gets(texto1);
	 puts("Digite novamente uma palavra ou um texto (max. 60 caracteres): ");
	 gets(texto2);
	 puts("Digite novamente uma palavra ou um texto (max. 60 caracteres): ");
	 gets(texto3);
	 len1 = strlen(texto1);
	 len2 = strlen(texto2);
	 len3 = strlen(texto3);
	 printf("Texto1: %s. %i caracteres\n", texto1, len1);
	 printf("Texto2: %s. %i caracteres\n", texto2, len3);
	 printf("Texto3: %s. %i caractetes\n", texto3, len3);
	 
}

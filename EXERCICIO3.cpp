#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char texto[80], letra, c;
	int i, cont=0;
	
	printf("Digite um texto: \n");
	gets(texto);
	printf("Digite um caractere: \n");
	scanf("%c", &letra);
	for(i=0;i<strlen(texto);i++)
		if(texto[i]==letra)
			cont++;
	
	printf("O caractere %c aparece %i vezes", letra, cont);
}

#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

main(){
	char texto[60], caract;
	int i, posicao;
	
	posicao = -1;
	puts("Digite uma string (maximo 60 caracteres):");
	gets(texto);
	puts("Digite um caractere para encontra-lo na string:");
	scanf("%c", &caract);
	for (i=0; i<strlen(texto); i++){
		if (caract==texto[i]){
			posicao=i;
			break;
		}
	}
	
	if (posicao==-1){
		printf("Caractere nao encontrado!");
	}
	else{
		printf("Primeira posicao do caractere na string: %i", posicao);
	}
	getch();
	
}

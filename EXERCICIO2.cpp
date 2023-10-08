#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char nome[20], sobrenome[60], completonome[80];
	printf("Digite o nome: \n");
	gets(nome);
	printf("Digite o sobrenome: \n");
	gets(sobrenome);
	strcpy(completonome, nome);
	strcat(completonome, " ");
	strcat(completonome, sobrenome);
	puts(completonome);
	
}

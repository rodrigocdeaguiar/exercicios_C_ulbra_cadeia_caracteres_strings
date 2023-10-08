#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char nome[60] = "Rodrigo", sobrenome[30] = "Costa de Aguiar";
	strcat(nome, " ");
	strcat(nome, sobrenome);
	puts(nome);
	
}

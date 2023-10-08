#include <conio.h>
#include <stdio.h>
#include <string.h>

main(){
	 char texto1[60], texto2[60], texto3[60];
	 printf("Digite uma palavra ou um texto: ");
	 gets(texto1);
	 printf("Digite novamente uma palavra ou um texto: ");
	 gets(texto2);
	 printf("Digite novamente uma palavra ou um texto: ");
	 gets(texto3);
	 
	 if((strcmp(texto1, texto2)<0)&&(strcmp(texto2, texto3)<0)){
	 	printf("Em ordem: %s, %s, %s", texto1, texto2, texto3);
	 }
	 if((strcmp(texto1, texto2)>0)&&(strcmp(texto2, texto3)<0)){
	 	printf("Em ordem: %s, %s, %s", texto2, texto1, texto3);
	 }
	 if((strcmp(texto1, texto2)>0)&&(strcmp(texto3, texto2)>0)){
	 	printf("Em ordem: %s, %s, %s", texto2, texto3, texto1);
	 }
	 if((strcmp(texto1, texto2)<0)&&(strcmp(texto2, texto3)>0)){
	 	printf("Em ordem: %s, %s, %s", texto1, texto3, texto2);
	 }
	 if((strcmp(texto1, texto2)<0)&&(strcmp(texto2, texto3)>0)){
	 	printf("Em ordem: %s, %s, %s", texto3, texto1, texto2);
	 }
	 if((strcmp(texto1, texto2)>0)&&(strcmp(texto2, texto3)>0)){
	 	printf("Em ordem: %s, %s, %s", texto3, texto2, texto1);
	 }
	 getch();
}

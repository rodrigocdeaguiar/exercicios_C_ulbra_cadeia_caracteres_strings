#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char texto1[31];
	int x,y;

	puts("Informe uma string (maximo 30 caracteres): ");
	gets(texto1);

	strupr(texto1);
	for(x=0;x<strlen(texto1);x++)
	{    
	    for(y=0;y<=x;y++)	
            printf("%c",texto1[y]);
	    printf("\n");
	}
	getch();
}

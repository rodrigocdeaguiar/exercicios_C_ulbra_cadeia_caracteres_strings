#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
main()
{
	char texto1[31];
	int x;

	puts("Informe uma string (maximo 30 caracteres): ");
	gets(texto1);

	for(x=0;x<strlen(texto1);x++)
	   if (x%2==0)
	   {
		  strupr(texto1);
		  printf("%c",texto1[x]);
	   }
	   else
	   {
		   strlwr(texto1);
		   printf("%c",texto1[x]);
	   }
	
	getch();
}

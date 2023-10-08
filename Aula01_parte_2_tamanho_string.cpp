#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	int i, cont = 0;
	char frase[50]="algoritmos e programacao";
    for(i=0; i < strlen(frase); i++){
          if (frase[i] =='a'){
          	cont++;
		  }
    }
    printf("%i", cont);
}

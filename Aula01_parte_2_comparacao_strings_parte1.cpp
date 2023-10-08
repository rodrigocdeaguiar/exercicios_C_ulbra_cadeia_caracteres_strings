#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
	char str1[20] = "Alface", str2[20] = "Xerox";
	if (strcmp(str1, str2)==0){
		printf("Somos Iguais");
}
	else{
		if (strcmp(str1, str2)<0){
		printf("As strings ordenadas sao %s, %s", str1, str2);
		}	
		else{
			printf("As strings ordenadas sao %s, %s", str2, str1);
		}
		
		}
			
		}

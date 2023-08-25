#include <stdio.h> 
#include <conio.h>

int main(){
	char string[1024];
	int i, tamanho;
		printf("Digite uma string: ");
gets(string);
		tamanho = strlen(string);
		printf("A string invertida -> ");
		for(i=tamanho-1; i>=0; i--){
		printf("%c" ,string[i]);
	}
//getch(); 
return 0;
}

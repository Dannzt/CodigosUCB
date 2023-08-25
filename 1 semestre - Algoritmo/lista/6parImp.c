#include <stdio.h>
#include <string.h>

int main() {
	int vl=0,i=0,p=0,ct=0;

    printf("Escreva um programa que receba dez numeros inteirosdo teclado e diga quantos\n");
    printf("sao pares e quantos sao impares.\n\n");

	do{
		printf("Escolha um numero:");	
		scanf("%d",&vl);
		
		if(vl%2==0){
			p++;
		}else{
			i++;
		}
		
		
	ct++;	
	}while(ct<10);

	printf("\n\nNumeros impares: %d",i);

	printf("\n\nNumeros pares: %d",p);


	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");
	int i, n;
	char vetor [5],aux;
	
	
	for(i=0;i<5;i++){
		printf("Digite a sua idade [%d] =",i+1);
		scanf("%c",&vetor[i]);
		fflush(stdin);
	}
	
	for(i=0;i<=4;i++){
		printf("%d \t",vetor[i]);
	}
	for (n = 1; n <= 5; n++) {
		for(i=0;i<=5;i++){
			if(vetor[i] > vetor[i + 1]) { 
			aux = vetor[i];
			vetor[i] =vetor[i + 1];
			vetor[i + 1] = aux;
			}
		}
	}
	printf("\n\n");
	for (i=0;i<=4;i++){
		printf("%c \t", vetor[i]);
	}
}

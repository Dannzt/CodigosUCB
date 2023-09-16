#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
									/* eu conversei com o meu mano Yugi */
/* - Escreva um programa em C que ordena um array de inteiros usando o algoritmo de ordenação por bolha */

main() {
	setlocale(LC_ALL, "Portuguese");
	int i, aux, n ,vetor [5];
	
	
	for(i=0;i<5;i++){
		printf("Digite um valor =",i+1);
		scanf("%d",&vetor[i]);
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
		printf("%d \t", vetor[i]);
	}
}

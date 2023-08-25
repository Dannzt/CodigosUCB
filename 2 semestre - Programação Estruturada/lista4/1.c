/*
Escreva uma função mm que receba um vetor inteiro v[0..n-1] e os endereços de duas variáveis 
inteiras, digamos min e max, e deposite nessas variáveis o valor de um elemento mínimo e o valor de um 
elemento máximo do vetor.Escreva também uma função main que use a função mm.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mm(int *v, int n, int *min, int *max) {
 int i;

*min = v[0];
*max = v[0];
 
	for (i = 1; i < n; i++) {
		
	 if (v[i] > *max) {
		*max = v[i];
		
	}else if (v[i] < *min) {
		*min = v[i];
		}
	}
}
int main() {
	
 int n, i, *vet, minimo, maximo; 
 printf("Quantos numeros voce deseja digitar? ");
  scanf("%d", &n); vet = malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
	printf("Digite o numero de indice %d: ", i);
 	scanf("%d", &vet[i]);
}
mm(vet, n, &minimo, &maximo); 
printf("Minimo: %d. Maximo: %d.\n", minimo, maximo); 
return 0;
}


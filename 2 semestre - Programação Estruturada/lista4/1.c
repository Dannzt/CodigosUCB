/*
Escreva uma fun��o mm que receba um vetor inteiro v[0..n-1] e os endere�os de duas vari�veis 
inteiras, digamos min e max, e deposite nessas vari�veis o valor de um elemento m�nimo e o valor de um 
elemento m�ximo do vetor.Escreva tamb�m uma fun��o main que use a fun��o mm.
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


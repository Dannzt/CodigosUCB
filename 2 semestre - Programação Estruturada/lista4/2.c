/*
Escreva uma função que recebe como parâmetros um vetor de inteiros v, o número de elementos dele 
N e ponteiros para variáveis nas quais devem ser armazenados os valores máximo e mínimo do vetor. 
Sua assinatura deve ser:void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void maximoMinimo(int *v, int n, int *maximo, int *minimo) {
 int i;

*minimo = v[0];
*maximo = v[0];
 
	for (i = 1; i < n; i++) {
		
	 if (v[i] < *maximo) {
		*maximo = v[i];
		
	}else if (v[i] > *minimo) {
		*minimo = v[i];
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
maximoMinimo(vet, n, &minimo, &maximo); 
printf("Minimo: %d. Maximo: %d.\n", minimo, maximo); 
return 0;
}

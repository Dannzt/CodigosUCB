#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 4

	/* Implemente uma versão do algoritmo de ordenação por inserção que ordene em ordem decrescente em 
vez de crescente. */

void insertion_sort(int *a);
	main() {
	setlocale(LC_ALL, "Portuguese");
int i, vet[MAX];
for(i = 0; i < MAX; i++){
	printf("Digite um valor: ");
	scanf("%d",&vet[i]);
}
insertion_sort(vet);
printf("\nValores ordenados\n");
for(i = 0; i < MAX; i++){
	printf("%d\t", vet[i]);
	}
}
void insertion_sort(int *a){
	int i,j,tmp;
	for(i = 1; i < MAX; i++){
		tmp = a[i];
		for(j = i-1; j >= 0 && tmp < a [j]; j--){
			a[j+1] = a[j];
		}
		a[j+1] = tmp;
	}
}

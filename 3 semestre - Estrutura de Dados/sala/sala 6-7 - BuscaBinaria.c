#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* eu conversei com o Yuki Amano */

//função de busca binária
int buscaBinaria(int arr[], int tamanho, int elemento){
	int inicio = 0;
	int fim = tamanho - 1;
	
	while (inicio<=fim){
		int meio = inicio + (fim - inicio) / 2;
		// se o elemento estiver no meio, retorne sua posição
		if(arr[meio] == elemento) {
			return meio;
		}
		// se o elemento for menor, ignore a metade direita
		if (arr[meio] > elemento) {
			fim = meio - 1;
			// se o elemento for maior , ignore a metade esquerda
		}else {
			inicio = meio + 1;
		}
	}
	return -1; 
}
int main() {
	setlocale(LC_ALL, "Portuguese");
	system("color c1");
	
	int arr[] = {2,3,4,5,8};
	int tamanho = sizeof(arr) / sizeof(arr[0]);
	int elemento = 4;
	
	int resultado = buscaBinaria(arr, tamanho, elemento);
	
	if (resultado != -1) {
		printf("Elemento encontrado na posição %d. \n", resultado);
	}else {
		printf ("elemento não encontrado.\n");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


	/* - Escreva uma fun��o em C que realize uma busca sequencial em uma matriz bidimensional de inteiros para 
encontrar um valor espec�fico fornecido pelo usu�rio. A fun��o deve retornar a posi��o da primeira ocorr�ncia do valor 
ou informar que o valor n�o foi encontrado - falei com o Yuki*/

	main() {
	setlocale(LC_ALL, "Portuguese");
	int i,n, vet[10]={9,12,5,17,77,137,44,120,21,76};
	for (i=0;i<10;i++)
	printf ("%d\t", vet[i]);
	
	printf("\n\nQual � o valor que deseja buscar? ");
	scanf ("%d", &n);
	
	for(i=0;i<10;i++){
		if(vet[i]==n){
			printf("%d ocorre na posi��o %d do vetor. \n", n,i);
			return 0;
		}
	}
}

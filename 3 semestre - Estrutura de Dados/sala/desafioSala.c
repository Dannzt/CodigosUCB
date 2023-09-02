#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



int main() {
	setlocale(LC_ALL, "Portuguese");
	int vet[5], i,n;

	srand(time(NULL));
	for (i=0;i<5;i++) {
		vet[i]=rand() % 1001;
		
		}
		printf("Vetor Gerado: \n");
	for (i=0;i<5;i++){
		printf("%d\t" ,vet[i]);
	}
	
	printf("\n\nQual é o valor que deseja buscar? ");
	scanf("%d",&n);
	
	for(i=0;i<5;i++){
		if(vet[i]==n){
			printf("%d ocorre na posicao %d de vetor. \n",n,i);
			return 0;
			}
		}
		
}


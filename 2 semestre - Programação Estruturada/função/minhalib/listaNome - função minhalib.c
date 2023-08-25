#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "minhalib.h"// minha biblioteca .h

main() {
	system ("COLOR 02");
	setlocale (LC_ALL,"portuguese");

	char nomes[10][30];
	int	opcao, exit=0, j, i=0;

	for (i=0;i<5;i++){
		printf("Informe o %dº nome: ",i+1);
		gets (nomes[i]);
	}
	do{
	system("cls");
		printf("O que deseja fazer?\n");
		printf("1- Mostrar lista dos nomes\n");
		printf("2- Mostrar em ordem crescente\n");
		printf("3- Mostrar em ordem decrescente\n");
		printf("4- Sair\n\n");
		printf("Digite aqui: ");
		scanf("%d",&opcao);

		switch(opcao){
			case 1:
				system("cls");
				printf("Lista dos nomes digitados\n\n");
				for(i=0;i<10;i++){
						printf("\t%s\n",nomes[i]);
				}
				getche();
				break;

			case 2:
				system("cls");
				printf("Lista em ordem crescente\n\n");
				ordena_crescente(nomes);
					for(i=0;i<10;i++){
					printf("\t%s\n",nomes[i]);
				}
				getche();
				break;
				
			case 3:
				system("cls");
				printf("Lista em ordem decrescente\n\n");
				ordena_decrescente(nomes);
					for(i=0;i<10;i++){
					printf("\t%s\n",nomes[i]);
				}
				getche();
				break;
				default: exit=1;
			
		}
	}

	while(!exit);

	return 0;
}

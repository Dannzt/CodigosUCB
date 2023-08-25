/*
 
 4. Elabore um programa que receba omo dados de entrada duas notas de vários alunos
e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou; 

*/

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"


main(){
	float nota, media, menorMedia = 99999999;
	int qtd=1, maiorSete=0,cont;
	
	while(qtd!=0){
		media = 0;
		
		printf("Digite a primeira nota: ");
		scanf("%f",&nota);
	
	
		if(nota!=0){
		
		media=media+nota;
		
		printf("\nDigite a segunda nota:",cont);
		scanf("%f",&nota);
		
		if(nota!=0){
		
		media=media+nota;
		
		
		printf("\n\n 1- continuar\n 0- encerrar\n");
		scanf("%d",&qtd);
		
		
		media=(nota+nota)/2;
		
		if(media>=7){
			maiorSete++;	
		}
		
		if(menorMedia>media){
			menorMedia=media;
		}
		
		
			}
		}
		cont++;
		
		system("cls");
		
		
	}
	
			 printf("O numero de alunos com a media maior ou igual a 7 foi: %d \n",maiorSete);
			 printf("A menor media foi: %.2f\n",menorMedia);
			 printf("A media da turma foi %.2f\n",media);
			 printf("A quantidade de vezes que rodou foi %d",cont);
		
	return 0;
}

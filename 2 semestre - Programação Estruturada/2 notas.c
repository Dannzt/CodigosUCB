/*

Faça um programa que receba como dados de entrada,
2 notas de uma turma de 10 alunos e mostre como resultado:
a)Qual a media do aluno com a maior media;
b)A lista dos alunos que tiveram media maior ou igual a 7
c)A media da turma ---.

*/
#include <stdio.h>
#include <stdlib.h>


struct lista {
   float notas[99];       
 }aluno;

main(){
	float nota1,nota2, media,maiorMedia;
	int qtd=1, maiorSete=0,cont,i;
	
	while(qtd!=0){

		
		printf("Digite a primeira nota: ");
		scanf("%f",&nota1);
	
	
		printf("\nDigite a segunda nota:",cont);
		scanf("%f",&nota2);
		
		
		printf("\n\n 1- continuar\n 0- encerrar\n");
		scanf("%d",&qtd);
		
		
		media=(nota1+nota2)/2;
		
		if(media>=7){
			maiorSete++;	
		}
		
		if(media > maiorSete) {
			maiorMedia= maiorSete && media;
		}
		
		
		}
		cont++;
		
		system("cls");
	
			 printf("A maior media foi: %.2f\n",maiorMedia);
			 printf("A media da turma foi %.2f\n",media);
			 printf("\n\n-- Lista de notas --");
  			for(i=0;i<99;i++){
     		if(aluno.notas[i] != 0)                
        	printf("\n\t %f",aluno.notas[i]);
    }
		
}



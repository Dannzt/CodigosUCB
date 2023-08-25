#include <stdio.h>
#include <stdlib.h>
#define qtd 3
/*Faça um programa que receba como dados de entrada,
2 notas de uma turma de 10 alunos e mostre como resultado:
a)Qual a media do aluno com a maior media;
b)A lista dos alunos que tiveram media maior ou igual a 7
c)A media da turma.
*/

struct{
	float n1;
	float n2;
	float m;
	char nome[50];
}	aluno[qtd];

void main() {
	int i;
	float maior;
	float mturma;
	//questionario para saber as notas
	for (i=0; i<qtd; i++){
		printf("Digite o nome do aluno: ");
		scanf("%s", &aluno[i].nome);
		printf("Digite a primeira nota do aluno [%d]: ", i+1);
		scanf("%f", &aluno[i].n1);
		printf("Digite a segunda nota do aluno [%d]: ", i+1);
		scanf("%f", &aluno[i].n2);
	}
	
	//media dos alunos
	for (i=0; i<qtd; i++){
	aluno[i].m = (aluno[i].n1 + aluno[i].n2)/2;
	
	//aluno com maior media
	if(aluno[i].m > maior){
		maior = aluno[i].m;
	}
}
	printf("A maior media foi: %.2f\n", maior);
	
	printf("Medias que foram maior ou igual a 7: \n");
	for (i=0; i<qtd; i++){

	//media maior ou = 7
	if (aluno[i].m >= 7){
		printf("\nAluno: %s\n", aluno[i].nome);
		printf("Media: %.2f\n", aluno[i].m);
	}
		mturma += aluno[i].m; 
}
	
	printf("A media de todos os alunos da turma foi de: %.2f", mturma/qtd);
}

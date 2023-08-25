

/* 3)	Faça um programa em C que leia os seguintes dados de cinco alunos da Faculdade Catolica: 
Nome, Número da matrícula, Telefone, Sexo (M ou F), Freqüência (nº de aulas freqüentadas) e as  duas notas (A1 e A2)

a)Para cada aluno, o nome, o número da matrícula, a freqüência, a média final e a mensagem 
(aprovado ou reprovado). Para ser aprovado a média final >= 6.0 e a frequência >= 60 aulas.


b)A maior e a menor média final da turma. 

c)O nome, número de matrícula e a média final, do aluno(a) com a maior média da turma.

d)O total de alunos aprovados e reprovados.


e)A percentagem de alunos reprovados por freqüência (para ser reprovado por freqüência, a freqüência deve ser menor que 60 aulas).



 */

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <string.h>
#define qtd 5
#define minAula 60 
#define notaCorte 7

struct Aluno {
    char nome[50];
    int matricula[15];
    char telefone[15];
    char sexo;
    int frequencia;
    float n1;
    float n2;
    float media;
	
}aluno[qtd];struct Aluno alunos[5];

struct maior_aluno{
	char nome[100],mat[15];
	float media;
}; struct maior_aluno maior_aluno[1];

int main() {
	
    printf("=== Cadastro de Alunos ===\n");
	int i, aprovados = 0, reprovados = 0;
	float maior, menor = 11;
	float mturma;
	
    for ( i = 0; i < 5; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
	
        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Numero da matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Telefone: ");
        scanf("%s", alunos[i].telefone);

        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);

        printf("Frequencia: ");
        scanf("%d", &alunos[i].frequencia);
	
        printf("Nota A1: ");
        scanf("%f", &alunos[i].n1);

        printf("Nota A2: ");
        scanf("%f", &alunos[i].n2);
        
        if(aluno[i].media < menor){
			menor = aluno[i].media;
		}
    }
    system("cls");

    printf("\n=== Dados dos Alunos ===\n");

    for (i = 0; i < 5; i++) {
    	
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Nome: %s\n", alunos[i].nome);
        printf("Numero da matricula: %d\n", alunos[i].matricula);
        printf("Telefone: %s\n", alunos[i].telefone);
        printf("Sexo (M) ou (F): %c\n", alunos[i].sexo);
        printf("Frequencia: %d\n", alunos[i].frequencia);
          if (alunos[i].frequencia >= minAula) {
          		textcolor(2);
        		printf("aluno(a) teve a frequencia necessaria!\n");
        		textcolor(7);
        		
    		} else {
    			textcolor(4);
        		printf("aluno(a) reprovou por falta\n");
        		textcolor(7);
	}
        printf("Nota A1: %.2f\n", alunos[i].n1);
        printf("Nota A2: %.2f\n", alunos[i].n2);
       alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
        printf("Media final %.2f\n", alunos[i].media);
        if (alunos[i].media >= 7 ) {
        	textcolor(2);
        		printf("aluno(a) teve a media necessaria!\n");
        		textcolor(7);
    	} else {
    		textcolor(4);
        	printf("aluno(a) nao alcancou a media .\n");
        	textcolor(7);
			}
			
			printf ("------------------------------\n resultados Individual \n");
		if (alunos[i].media > 7 && alunos[i].frequencia >= 60) { 
				 textcolor(2);
    			 printf("Aluno(a) %s foi aprovado \n",alunos[i].nome); 
    			 textcolor(7); 
    		
		}else{
   			textcolor(4);
     		printf("Aluno(a) %s foi reprovado \n",alunos[i].nome);
     		textcolor(7);
     		
   		   }
  

    }
       printf("--------------------------------------------------");
    printf ("\n=== Media turma ===\n");
for (i = 0; i < qtd; i++) {
    alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
    
    if (aluno[i].media < menor){
			menor = aluno[i].media;
		}

    if (alunos[i].media > maior) {
			maior = alunos[i].media;
			strcpy(maior_aluno[1].nome, alunos[i].nome);
			maior_aluno[1].media = alunos[i].media;
			strcpy(maior_aluno[1].mat, aluno[i].matricula);
		}
    
    mturma += alunos[i].media;
    
    if (alunos[i].media >= notaCorte && alunos[i].frequencia >= minAula) {
        aprovados++;
    } else {
        reprovados++;
    }


}

float perctReprovados = (float)reprovados / qtd * 100;



printf("A media de todos os alunos da turma foi de: %.2f\n\n", mturma / qtd);
printf("A menor nota da turma foi: %.2f\n", menor);
textcolor(2);
printf("%d alunos foram aprovados\n", aprovados);
textcolor(4);
printf("%d alunos que foram reprovados\n", reprovados);
printf(" %.2f%%  foram reprovados por falta\n", perctReprovados);
printf("-----------------------------------------------------------------------------------------------------------------------");
textcolor(11);
printf("O(a) aluno(a) com a maior média foi o(a) %s \nmatricula: %d \ncom a media de %.2f\n", maior_aluno[1].nome,maior_aluno[1].mat, maior);



    return 0;
}

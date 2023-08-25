#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* eu conversei com o Yugi */

struct CadAluno{
      char nome[40];
      float matricula;
    float telefone;
      char diciplina[30];
      float nota1;
      float nota2;
      char email[50];
      }; struct CadAluno aluno;
      
int main(void) {
      printf("\n------------ Cadastro aluno ------------");
      
      printf("\nNome do aluno...:");
      fflush(stdin);
      fgets(aluno.nome,40,stdin);
      
      printf("\nDisciplina ....:");
      fflush(stdin);
      fgets(aluno.diciplina, 40,stdin);
      
      printf("\n matricula....:");
      scanf("%f",&aluno.matricula);
      
      printf("\n insira o telefone");
      scanf("%f", &aluno.telefone);
      
      printf("\nInforme a primeira nota...:");
      scanf ("%f", &aluno.nota1);
      
      printf("\ninforme a segunda nota...:");
      scanf("%f", &aluno.nota2);
      
      
      printf("\n informe email...:");
      fflush(stdin);
      fgets(aluno.email, 50,stdin);
      
      
      
      printf ("\n\n------ Dados da struct ------\n\n");
      printf("nome....: %s\n", aluno.nome);
      printf("matricula...: %f\n", aluno.matricula);
      printf("Disciplina....:%s\n",aluno.diciplina);
      printf("email....: %s\n", aluno.email);
      printf("telefone...:%f\n",aluno.telefone);
      printf("Nota 1....: %.2f\n", aluno.nota1);
      printf("Nota 2....: %.2f\n", aluno.nota2);
      
      
      getch();
      return 0;
}


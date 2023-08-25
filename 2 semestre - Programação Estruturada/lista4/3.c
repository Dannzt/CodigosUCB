  #include <stdio.h>
    #include <stdlib.h>
    #include "conio2.h"
    #include <string.h>
    #define qtd 5
    
    struct Aluno {
        char nome[50];
        int matricula[15];
        float n1;
        float n2;
        float media;
        
    }aluno[qtd];struct Aluno alunos[5];
    
    
    
    void DadosAlunos() {
        int i;
        for (i = 0; i < 5; i++) {
            
            printf("\n--- Aluno %d ---\n", i + 1);
    
            printf("Nome: %s\n", alunos[i].nome);
            printf("Numero da matricula: %d\n", alunos[i].matricula);
            printf("Nota A1: %.2f\n", alunos[i].n1);
            printf("Nota A2: %.2f\n", alunos[i].n2);
           alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
            printf("Media final %.2f\n", alunos[i].media);
    
    
    }
       
    }
    
    
    int main() {
        
        printf("=== Cadastro de Alunos ===\n");
        int i;
    
        
        for ( i = 0; i < 5; i++) {
            printf("\n--- Aluno %d ---\n", i + 1);
        
            printf("Nome: ");
            scanf("%s", alunos[i].nome);
    
            printf("Numero da matricula: ");
            scanf("%d", &alunos[i].matricula);
    
            printf("Nota A1: ");
            scanf("%f", &alunos[i].n1);
    
            printf("Nota A2: ");
            scanf("%f", &alunos[i].n2);
        }
        
        system("cls");
    
        printf("\n=== Dados dos Alunos ===\n");
        
        DadosAlunos();
    
        return 0;
    }

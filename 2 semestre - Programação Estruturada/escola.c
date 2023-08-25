#include <stdio.h>

typedef struct {
    char nome[50];
    int matricula;
    char telefone[20];
    char sexo;
    int frequencia;
    float notaA1;
    float notaA2;
    float media;
} Aluno;

int main() {
    Aluno alunos[5];
    int i;

    // Leitura dos dados dos alunos
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Número de matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Telefone: ");
        scanf("%s", alunos[i].telefone);

        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);

        printf("Frequência: ");
        scanf("%d", &alunos[i].frequencia);

        printf("Nota A1: ");
        scanf("%f", &alunos[i].notaA1);

        printf("Nota A2: ");
        scanf("%f", &alunos[i].notaA2);

        printf("\n");
    }

    // Cálculo das médias e verificação de aprovação/reprovação
    float mediaMaxima = 0.0;
    float mediaMinima = 10.0;
    int indiceMaiorMedia = 0;
    int totalAprovados = 0;
    int totalReprovados = 0;
    int totalReprovadosPorFrequencia = 0;

    for (i = 0; i < 5; i++) {
        float media = (alunos[i].notaA1 + alunos[i].notaA2) / 2;
        alunos[i].media = media;

        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Número de matrícula: %d\n", alunos[i].matricula);
        printf("Frequência: %d\n", alunos[i].frequencia);
        printf("Média final: %.2f\n", media);

        if (media >= 6.0 && alunos[i].frequencia >= 60) {
            printf("Situação: Aprovado\n");
            totalAprovados++;
        } else {
            printf("Situação: Reprovado\n");
            totalReprovados++;
            if (alunos[i].frequencia < 60) {
                totalReprovadosPorFrequencia++;
            }
        }

        printf("\n");

        if (media > mediaMaxima) {
            mediaMaxima = media;
            indiceMaiorMedia = i;
        }

        if (media < mediaMinima) {
            mediaMinima = media;
        }
    }

    // Resultados gerais
	printf("Maior média final: %.2f\n", mediaMaxima);
	printf("Menor média final: %.2f\n", mediaMinima);
	printf("Aluno(a) com a maior média: %s\n", alunos[indiceMaiorMedia].nome);
	printf("Número de matrícula: %d\n", alunos[indiceMaiorMedia].matricula);
	printf("Média final: %.2f\n", alunos[indiceMaiorMedia].media);
	printf("Total de alunos aprovados: %d");
	
	
	}
	

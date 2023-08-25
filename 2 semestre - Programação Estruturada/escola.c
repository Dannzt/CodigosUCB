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

        printf("N�mero de matr�cula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Telefone: ");
        scanf("%s", alunos[i].telefone);

        printf("Sexo (M/F): ");
        scanf(" %c", &alunos[i].sexo);

        printf("Frequ�ncia: ");
        scanf("%d", &alunos[i].frequencia);

        printf("Nota A1: ");
        scanf("%f", &alunos[i].notaA1);

        printf("Nota A2: ");
        scanf("%f", &alunos[i].notaA2);

        printf("\n");
    }

    // C�lculo das m�dias e verifica��o de aprova��o/reprova��o
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
        printf("N�mero de matr�cula: %d\n", alunos[i].matricula);
        printf("Frequ�ncia: %d\n", alunos[i].frequencia);
        printf("M�dia final: %.2f\n", media);

        if (media >= 6.0 && alunos[i].frequencia >= 60) {
            printf("Situa��o: Aprovado\n");
            totalAprovados++;
        } else {
            printf("Situa��o: Reprovado\n");
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
	printf("Maior m�dia final: %.2f\n", mediaMaxima);
	printf("Menor m�dia final: %.2f\n", mediaMinima);
	printf("Aluno(a) com a maior m�dia: %s\n", alunos[indiceMaiorMedia].nome);
	printf("N�mero de matr�cula: %d\n", alunos[indiceMaiorMedia].matricula);
	printf("M�dia final: %.2f\n", alunos[indiceMaiorMedia].media);
	printf("Total de alunos aprovados: %d");
	
	
	}
	

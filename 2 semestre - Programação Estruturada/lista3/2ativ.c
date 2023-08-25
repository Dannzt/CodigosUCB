
/* 2)	Programa que lê o código, o sexo (M-Masculino e F-Feminino) e o  número de horas/aula dadas no mês dos professores de uma escola, sabendo que um professor ganha R$ 15,00 hora/aula e que a escola possui 5 professores.
Após a leitura, mostre:

a) Uma listagem contendo o código, o salário bruto, o desconto e o salário líquido de todos os professores;
b) A média aritmética dos salários brutos dos professores do sexo masculino;  
c) A média aritmética dos salários brutos dos professores do sexo feminino;
 Os descontos são assim calculados:

Sexo      Até 70 horas/aula ao mês     Mais que 70 horas/aula ao mês
M                10%                                 8%
F                 7%                                 5%      
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define qtdPro 5
#define vhoraAula 15.0

int main() {
		setlocale(LC_ALL, "Portuguese");
    int codigo[qtdPro];
    char sexo[qtdPro];
    int horas_aula[qtdPro];
    float salario_bruto[qtdPro];
    float desconto[qtdPro];
    float salario_liquido[qtdPro];
    float soma_salario_masculino = 0.0;
    float soma_salario_feminino = 0.0;
    int contmasculino = 0;
    int contfeminino = 0;
    int i;

    for ( i = 0; i < qtdPro; i++) {
        printf("Professor %d:\n", i+1);
        printf("Código: ");
        scanf("%d", &codigo[i]);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);
        printf("Horas aula: ");
        scanf("%d", &horas_aula[i]);
        printf("\n");
    }

    for (i = 0; i < qtdPro; i++) {
        salario_bruto[i] = horas_aula[i] * vhoraAula;
        
        if (sexo[i] == 'M') {
            if (horas_aula[i] <= 70) {
                desconto[i] = salario_bruto[i] * 0.10;
            } else {
                desconto[i] = salario_bruto[i] * 0.08;
            }
            salario_liquido[i] = salario_bruto[i] - desconto[i];
            soma_salario_masculino += salario_bruto[i];
            contmasculino++;
        } else if (sexo[i] == 'F') {
            if (horas_aula[i] <= 70) {
                desconto[i] = salario_bruto[i] * 0.07;
            } else {
                desconto[i] = salario_bruto[i] * 0.05;
            }
            salario_liquido[i] = salario_bruto[i] - desconto[i];
            soma_salario_feminino += salario_bruto[i];
            contfeminino++;
        } else {
            printf("Sexo inválido para o professor %d!\n", i+1);
        }
    }

    printf("Listagem dos professores:\n");
    for (i = 0; i < qtdPro; i++) {
        printf("Código: %d\n", codigo[i]);
        printf("Salário bruto: %.2f\n", salario_bruto[i]);
        printf("Desconto: %.2f\n", desconto[i]);
        printf("Salário líquido: %.2f\n", salario_liquido[i]);
        printf("\n");
    }

    float media_salario_masculino = soma_salario_masculino / contmasculino;
    float media_salario_feminino = soma_salario_feminino / contfeminino;

    printf("Média salarial dos professores do sexo masculino: %.2f\n", media_salario_masculino);
    printf("Média salarial dos professores do sexo feminino: %.2f\n", media_salario_feminino);

    return 0;
}

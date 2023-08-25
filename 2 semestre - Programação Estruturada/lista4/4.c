/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o 
cargo, conforme a tabela abaixo. Faça um algoritmo que leia o salário e o cargo de um funcionário e 
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de 
aumento. Mostre o salário antigo, o novo salário e a diferença. Utilize Structs e função utilizando 
ponteiros. 

Código Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int cod;
    float salarioAtual;
} Funcionario;

void calcularNovoSalario(Funcionario *funcionario) {
    float aumento, novoSalario;

    if (funcionario->cod == 101) {
        aumento = funcionario->salarioAtual * 0.10;
    } else if (funcionario->cod == 102) {
        aumento = funcionario->salarioAtual * 0.20;
    } else if (funcionario->cod == 103) {
        aumento = funcionario->salarioAtual * 0.30;
    } else {
        printf("Codigo invalido, adicional de 40%%\n");
        aumento = funcionario->salarioAtual * 0.40;
    }
    
    novoSalario = aumento + funcionario->salarioAtual;


    printf("Salario atual : R$ %.2f\n", funcionario->salarioAtual);
    printf("Aumento : R$ %.2f\n", aumento);
    printf("Novo salario : R$ %.2f\n", novoSalario);
}

int main(void) {
    Funcionario funcionario;

    printf("Codigo\n\n101 - Gerente\n102 - Engenheiro\n103 - Tecnico\n\n");
    printf("Digite o codigo do cargo: ");
    scanf("%d", &funcionario.cod);
    printf("Digite o salario atual: R$ ");
    scanf("%f", &funcionario.salarioAtual);

    calcularNovoSalario(&funcionario);

    return 0;
}


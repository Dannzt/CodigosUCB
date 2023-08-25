#include <stdio.h>
#include <string.h>

int main() {
	int habitante=0,MSalario=0,salario=0,salario1=0,filho=0,filho1=0,porcentagem;

	
    printf("A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando\n");
    printf("dadossobre o salário e número de filhos. A prefeitura deseja saber:\n");
    printf("a) média do salário da população;\n");
    printf("b) média do número de filhos;\n");
    printf("c) maior salário;\n");
    printf("d) percentual de pessoas com salário até R$ 100,00.\n");
    printf("O final da leitura de dados se dará com a entrada de um salário negativo.\n\n");

    printf("Informacoes da cidade:");
	printf("\n(Para finalizar escreva um valor negativo no salario )\n\n");
	
	do{
		habitante=habitante+1;
		
		printf("\nIndividuo %d",habitante);
		
		
		printf("\nSalario:R$");
		scanf("%d",&salario);
		
		printf("\nNumro de filhos:");
		scanf("%d",&filho);
		
		printf("----------------------\n");
		
		if(salario>MSalario){
		MSalario=salario;	
		}
		
		if(salario<=100 && salario>0 ){
		porcentagem=porcentagem+1;
		}
		
		if(salario>=0)	{			
		salario1=salario+salario1;
		filho1=filho+filho1;
		}
				
	}while(salario>=0);

	habitante=habitante-1;
	salario=salario/habitante;
	filho=filho1/habitante;
	
	porcentagem=porcentagem*100;
	porcentagem=porcentagem/habitante;
	
	if (salario>=0){
	printf("\n\n\n-=-Informacoes da cidade-=-\n");
	printf("\nHabitantes:%d\n",habitante);
	printf("\nMedia dos salario:R$%d\n",salario);
	printf("\nMedia dos filhos:%d\n",filho);
	printf("\nO maior salario:%d\n",MSalario);
	printf("\nPercentual de pessoas com salario ate R$100 :%d",porcentagem);	
	printf("\n\n-=------------------------=-\n");
	}

return 0;
}
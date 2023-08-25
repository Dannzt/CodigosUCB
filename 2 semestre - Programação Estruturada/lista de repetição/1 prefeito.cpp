/*

1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário e o número de filhos. A prefeitura deseja saber:
a) média salarial da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo.

*/

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

int main() {
	
    float count = 0, salario1 = 0, salario2 = 0, salario3 = 0, medSalario = 0, filho1 = 0, filho2 = 0, filho3 = 0, medFilho = 0, porcent = 0;
    int encerrar = 0;
    
    
    do{
    	
    	textcolor(1);
        printf("Digite o salario do habitante: ");
        scanf("%f", &salario1);
        if(salario1<=0){
            break;
        }
        printf("Digite quantos filhos o habitante tem: ");
        scanf("%f", &filho1);
        
       	system("cls");
         textcolor(2);
        
        printf("Digite o salario do habitante: ");
        scanf("%f", &salario2);
        if(salario2<=0){
            break;
        }
        printf("Digite quantos filhos o habitante tem: ");
        scanf("%f", &filho2);
        
        system("cls");
         textcolor(3);
        
        printf("Digite o salario do habitante: ");
        scanf("%f", &salario3);
        if(salario3<=0){
            break;
        }
        
        printf("Digite quantos filhos o habitante tem: ");
        scanf("%f", &filho3);
        
        system("cls");
        
        
				textcolor(1);
		 
        medSalario = (salario1 + salario2 + salario3)/3;
        printf("A media salarial da populacao e de: R$%.2f \n", medSalario);
        
        		textcolor(2);
        medFilho = (filho1 + filho2 + filho3)/3;
        printf("A media de filhos por habitante e de: %.2f \n", medFilho);


				textcolor(3);
    if(salario1 > salario2 && salario1 > salario3){
	printf("O maior salario e de R$%.2f\n", salario1);
    }
   	if(salario2 > salario1 && salario2 > salario3){
       printf("O maior salario e de R$%.2f\n", salario2);
       	}else{
    printf("O maior salario e de R$%.2f\n", salario3);
        	}
        
    	if(salario1<=100){
           count++;
        	}
     	if(salario2<=100){
           count++;
        	}
      	if(salario3<=100){
           count++;
        	}
    
    			textcolor(4);
        porcent = count/3*100;
        printf("%.2f %% recebem menos que R$ 100,00", porcent);
        
        //sleep(5);
        //system("cls");
        break;
        }while(encerrar >= 0);
    
    return 0;
}

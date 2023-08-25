
/*

3- Elabore um programa que fa�a o sorteio de v�rios n�meros e ao final mostra:
a) A quantidade de n�meros sorteados;
b) O Maior numero sorteado;
c) Quantos n�meros pares foram sorteados; 

Observa��o: O programa deve finalizar quando for sorteado o valor 0 (zero)e utilizar no 
m�ximo 3 vari�veis n�o utilizar vetores ou matrizes. 

*/

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"


int main() {
    int qtd, numMaior=0, numPares = 0;
    
    printf("Digite a quantidade de 1 a 10 para serem sorteados: ");
    scanf("%d", &qtd);
    

    for(int i = 0; i < qtd; i++) {
        int numAleatorio = rand() % 11 ; 
        printf("%d ", rand() % 11 ); 
        
     
        if(numAleatorio > numMaior) {
            numMaior = numAleatorio;
        }
   
        if(numAleatorio % 2 == 0) {
            numPares++;
        }
        
        if(qtd <= 0){
        	printf ("Valor invalido, fechando programa.");
        	break;
		}
    }
    
    
    
    printf("\nQuantidade de numeros sorteados: %d\n", qtd);
    printf("Maior numero sorteado: %d\n", numMaior+1);
    printf("Quantidade de numeros pares sorteados: %d\n", numPares+1);
    
    return 0;
}

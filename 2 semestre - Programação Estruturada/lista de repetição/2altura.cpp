/*

2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Faça um programa em C que recebendo a altura e o
crescimento anual de duas pessoas calcule e imprima quantos anos serão necessários
para que a mais baixa seja maior que a outra. Caso isto não ocorra em 100 anos
informar mensagem de impossibilidade.
Encerre a entrada de dados quando for digitada uma idade negativa. (Não use
vetores ou matrizes).

*/



#include <stdio.h>
#include <string.h>
#include "conio2.h"

int main() {
	float altChico,altZe,crescChico,crescZe;
	int anos;
	
	
	
			textcolor (2);
	printf("Alturas e crescimentos(Em centimetros)\n\n");
		
		printf("Insira a altura da primeira pessoa: ");
		scanf("%f",&altChico);
		
		printf("\nO seu crescimento anual e de: ");
		scanf("%f",&crescChico);
		
			system ("cls");
			textcolor (9);
		
		printf("Insira a altura da segunda pessoa: ");
		scanf("%f",&altZe);
		
		printf("\ne o seu crescimento e de: ");
		scanf("%f",&crescZe);
				
			if(altChico>altZe){
				do{
				anos++;
				altChico=altChico+crescChico;
				altZe=altZe+crescZe;				
				}while(altZe<altChico || anos==100);
				
			}else{
				do{
				anos++;
				altChico=altChico+crescChico;
				altZe=altZe+crescZe;				
				}while(altChico<altZe || anos==100);
			}
	
			
				if(anos>=100){
						textcolor(10);
					printf("\nImpossivel o mais baixo utrapassar o mais alto em 100 anos");
				}else{
						textcolor(11);
				printf("\nO mais baixo utrapassara os mais alto em %d anos",anos);	
				
				}
	
	

return 0;
}


	
	
	
	
	
	


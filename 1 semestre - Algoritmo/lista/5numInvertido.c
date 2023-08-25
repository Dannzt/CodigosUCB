#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero[3];
	int i;
    
        printf ("Escreva um programa que leia tres numeros do teclado e os imprima na tela na ordem\n");
        printf ("inversa da entrada.\n\n");
        
       
  	for (i = 0; i < 3; i++){
  			printf ("Digite o %d numero: ", i + 1);
  			scanf ("%d", &numero[i]);
	  }
    		printf("Numeros na ordem inversa: \n");
    		for (i = 2; i >= 0; i--){
    			printf("%d\t", numero[i]);
			}
    return 0;
}
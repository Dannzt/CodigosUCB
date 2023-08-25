#include <stdlib.h>
#include "conio2.h"

int main() {
    int i;
    char nome[100];

    

    printf("Digite um nome: ");
    scanf("%s", nome);

    for (i = 0; i < 10; i++) {
		textcolor(nome+1);
        
        
        //sleep(1);
    }
    
      printf ("%s",&nome);
    	

    return 0;
}

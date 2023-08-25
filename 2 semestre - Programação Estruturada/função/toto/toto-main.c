#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "toto.h"


/* faça um programa que receba como dados de entrada, o valor de um serviço e mostre como resultado o valor do serviço
com 10% de desconto 
obs:utilizar função em um arquivo .h*/


main() {
	
	int v1,v2;
		textcolor(2);
		printf ("Digite o valor 1: "); scanf ("%d", &v1);
		printf ("Digite o valor 2: "); scanf ("%d", &v2);
	
		textcolor(11);
		somar(v1,v2);
		
	return 0;
	
}

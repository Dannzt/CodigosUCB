#include <stdio.h>
#include <stdlib.h>

/* faça um programa que receba como dados de entrada o valor do salario calculando o desconto de 11%
a - a lista com os salarios e os descontos
b - qual foi o maior salario
c - a media dos descontos  */

main() {
      float salario[5];
      float inss[5];
      float maior;
      float md;
      int cont;
      
       for (cont=0;cont < 5; cont ++){
            printf ("Digite o salario ");
            scanf ("%f",&salario[cont]);
            inss[cont]= salario[cont]*0.11;
              if (salario[cont] > maior){
                  maior = salario[cont];
               }
            md+=inss[cont];
       }
            printf ("\n Lista de salarios e descontos");
       for (cont=0;cont < 5; cont ++){
            printf ("\n O salario %0.2f  O inss %0.2f ",salario[cont], inss[cont]);
               }
               printf ("\n Maior salario %0.2f", maior);
               printf ("\n media de desconto %0.2f", md/5);
}




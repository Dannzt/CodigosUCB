#include <stdio.h>
#include <stdlib.h>

/* Faça um progrma que receba como dado de entrada com varios numeros inteiros, e mostre quantos numeros contou
qual foi o maior numero digitado*/

main() {
      
      int cont = 1,valor,valMaior,qtd = 0;
      
            while (cont !=0){
                  printf ("Digite um numero ");
                  scanf ("%d", &valor);
                  if(valor > valMaior){
                    valMaior = valor;     
            }
                  //system("cls");
                  
                  qtd++;
                  printf ("Digite 1 para continuar \n ou 0 para sair");
                  scanf ("%d",&cont);
            }
            
            printf ("\n O progrma rodou %d vezes", qtd);
            printf ("\n O maior numero digitado foi %d",qtd);

}

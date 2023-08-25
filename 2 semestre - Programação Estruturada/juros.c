#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

faça um programaem c# o valor com dado de entrada com o valor de uma venda e a quantidade de parcelas, e mostre como resultado
o valor da venda com desconto obedecendo a seguinte tabela.

--------------------------
parcelas |               |
0 ou 1   |Desconto de 5% |
2 até 3  | Juros de 5%   |
4 ou mais|juros de 10%   |
--------------------------

*/


int main() {
	setlocale(LC_ALL, "Portuguese");
      int parcelas;
      float valor;
      
                        printf("faça um programaem c# o valor com dado de entrada com o valor de uma venda e a quantidade de parcelas, e mostre como resultado o valor da venda com desconto ");
      
      printf ("Insira o valor:\n ");
      scanf ("f%",&valor);
      
      printf ("Quantidade de parcelas: ");
      scanf ("d% ",&parcelas);


            if (parcelas >= 0 && parcelas <=1) {
                  printf("Valor final 0.2f",valor - valor *0.05);
                  
            }     
            if (parcelas >= 2 && parcelas <=3){
                  printf("Valor final 0.2f",valor + valor *0.05);
                  
            }if (parcelas ==4){
                  printf("Valor final 0.2f",valor + valor *0.05);
            }
      
      return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* faça um programa que execute as 4 operações com poteiro */

int main() {
      setlocale(LC_ALL, "Portuguese");
      float *num1,*num2,res1;
      int valor1,valor2,res2;
      

      printf("digite o primeiro valor ");
      scanf ("%d",&num1);

      printf("digite o segundo valor ");
      scanf ("%d",&num2);
      
      num1 = &valor1;
      num2 = &valor2;
      
      res2 = *num1 + *num2;   
      
      printf ("%f",*num1 + *num2);
      }




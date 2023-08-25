#include <stdio.h>
#include <stdint.h>

   int main()
{

        printf ("Escreva um programa que leia cinco valores e conte quantos desses valores sao\n");
        printf ("negativos, mostrando essa informacoes no final.\n\n");
        
    int valor[5];
    int leia;
    int valorN = 0;
    for (leia = 0; leia < 5; leia++)
    {

        printf("Digite o valor: ", leia + 1);
        scanf("%d", &valor[leia]);

        if (valor[leia] < 0)
        {
            valorN++;
        }
    }

    printf("Você digitou %d valores negativos.\n", valorN);
}
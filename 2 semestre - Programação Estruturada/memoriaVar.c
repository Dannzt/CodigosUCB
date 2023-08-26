#include <stdio.h>
#include <locale.h>

int main()
{
      setlocale (LC_ALL,"portuguese");
      char matriz[10] = "palavra";
      // informar o tamanho em bytes de um determinado tipo de variavel;
            printf("Tamanho de um short é %d bytes\n", sizeof(short int));
            printf("Tamanho de um int é %d bytes\n", sizeof(long int));
            printf("Tamanho de um char é %d bytes\n", sizeof(char));
            printf("Tamanho de um vetor de char com 10 posições é %d  bytes\n", sizeof(matriz));

}


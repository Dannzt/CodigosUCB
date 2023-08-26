
#include <stdio.h>
#include <locale.h>
int main()
{
setlocale (LC_ALL,"portuguese");
char letra = 'E';
int numero = 35;
char matriz[10] = "estruturaDeDados";
float numeroDecimal = 87.8;
      printf("Endereço de memória das variáveis\n\n");
      printf("O valor da variável letra é %c e seu endereço é %x\n",letra,&letra);
      printf("O valor da variável numero é %d e seu endereço é %x\n",numero,&numero);
      printf("O valor da variável matriz é %s e seu endereço é %x\n",matriz,matriz);
      printf("O valor da variável numeroDecimal é %2.1f e seu endereço é %x\n",numeroDecimal,&numeroDecimal);
}


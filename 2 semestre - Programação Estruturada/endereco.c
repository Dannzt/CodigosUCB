#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char letra = 'E';
    int numero = 35;
    char matriz[10] = "estruturaDeDados";
    float numeroDecimal = 87.8;

    printf("Endereço de memória das variáveis\n\n");
    printf("O valor da variável letra é %c e seu endereço é %p\n", letra, (void *)&letra);
    printf("O valor da variável numero é %d e seu endereço é %p\n", numero, (void *)&numero);
    printf("O valor da variável matriz é %s e seu endereço é %p\n", matriz, (void *)matriz);
    printf("O valor da variável numeroDecimal é %.1f e seu endereço é %p\n", numeroDecimal, (void *)&numeroDecimal);

    return 0;
}

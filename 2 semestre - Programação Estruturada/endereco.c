#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char letra = 'E';
    int numero = 35;
    char matriz[10] = "estruturaDeDados";
    float numeroDecimal = 87.8;

    printf("Endere�o de mem�ria das vari�veis\n\n");
    printf("O valor da vari�vel letra � %c e seu endere�o � %p\n", letra, (void *)&letra);
    printf("O valor da vari�vel numero � %d e seu endere�o � %p\n", numero, (void *)&numero);
    printf("O valor da vari�vel matriz � %s e seu endere�o � %p\n", matriz, (void *)matriz);
    printf("O valor da vari�vel numeroDecimal � %.1f e seu endere�o � %p\n", numeroDecimal, (void *)&numeroDecimal);

    return 0;
}

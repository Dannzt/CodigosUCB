int main()
{

    float soma = 0;
    int conte = 0;
    int numero;

        printf("Escreva um programa que calcule a media dos numeros digitados pelo usuario, se\n");
        printf("eles forem pares. O programa deve terminar a leitura se o usuario digitar zero.\n\n");
    
    do
    {
        
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero % 2 == 0 && numero != 0)
        {
            conte++;
            soma += numero;
        }
    } while (numero != 0);

    printf("Media dos numeros pares: %.2f\n", soma / conte);
    
}
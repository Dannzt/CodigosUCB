#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf ("Escreva um programa de controle de senha que de tres chances de acerto ao usuario se ele \n");
        printf ("nao conseguir, o programa deve avisar que o cartao foi bloqueado.\n\n");

    int senha = 1234;
    int senhaIn;
    int tentativas;
    for (tentativas = 0; tentativas < 3; tentativas++)
    
    
    {
  
        if (senhaIn)
        {
            printf("Senha incorreta. Tente novamente.\n");
        }


        printf("Digite sua senha: ");
        scanf("%d", &senhaIn);

        if (senhaIn == senha)
        {
            printf("Senha CORRETA!\n");
            break;
        }
    }

    if (senhaIn != senha)
    {
        printf("Senha digitada incorretamente 3 vezes.\n Cartao BLOQUEADO\n");
    }


}









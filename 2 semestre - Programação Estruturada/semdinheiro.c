
#include <stdio.h>
#include <stdlib.h>
/* faça um programa que receba o nome e o salario de 5 funcionarios
a- lista com os nomes e o salarios digitados
b- a media do salarios
ob(utilizar struct)
*/

struct mediaFuncionario{
      char nome[30];
      int salario;      
      
}lista_info[3]; // declarar como apelido


main() {
int i;
float media = 0;
                  
            for (i=0;i<3;i++){
            printf ("Digite o nome ");
            scanf("%s",&lista_info[i].nome);
            printf("Digite o salario R$");
            scanf("%f",&lista_info[i].salario);
            media+=lista_info[i].salario;
      }
      
      
for (i=0;i<3;i++){
      printf("\n%s",lista_info[i].nome);
      printf("\n%f\n",lista_info[i].salario);
}
      printf("\nA media foi %0.2f",media/i);
}




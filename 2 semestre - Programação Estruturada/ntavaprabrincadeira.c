#include <stdio.h>
#include <stdlib.h>

struct dadosEmpregado
{
      int matricuça;
      char nomeEmpregado[50];
      char cpf[14];
      double salario;
};
struct dadosEmpregado empregado1, empregado2;

main() {
      printf ("Digite o nome: ");
      gets (empregado1.nomeEmpregado); // Lê a string
      fflush (stdin);                           // limpa o buffer de teclado
      print("\n Digite o identificaodr da pessoa:");
      scanf ("%d",&empregado1.matricula);
      fflush(stdin);
      printf ("\nDigite o CPF: ");
      gets(empregado1.cpf);
      system("pause");
      
}



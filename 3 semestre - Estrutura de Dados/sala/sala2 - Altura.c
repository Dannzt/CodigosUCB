
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* eu conversei com o Yugi */
typedef struct{
      float Peso;
      int Idade;
      float Altura;
}pessoa;

void ImprimePessoa(pessoa P){
      printf("Idade: %d Peso: %f Altura %.2f\n",P.Idade,P.Peso,P.Altura);
}

void SetPessoa(pessoa *P, int idade, float peso, float altura){
      (*P).Idade = idade;
      P->Peso = peso;
      P->Altura = altura;
}

main() {
      pessoa Rafa;
      SetPessoa(&Rafa, 15,70.5,1.75);
      ImprimePessoa(Rafa);
}

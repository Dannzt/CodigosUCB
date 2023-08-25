#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

/* O Yugi falou comigo */

typedef struct{
	char Titulo[20];
	int Classificacao;
	char Diretor[20];
	char Genero[20];
	char Duracao[20];
}filme;

void ImprimeFilme(filme F){
	printf("Nome do filme:%s\n Diretor:%s\n Duração:%s\n Genero:%s\n Classificacao:%d\n",F.Classificacao,F.Diretor,F.Duracao,F.Genero,F.Titulo);
}

void SetFilme(int classificacao, const char *titulo, const char *diretor, const char *duracao, const char *genero){
	filme F;
	F.Classificacao = classificacao;
	strcpy(F.Titulo, titulo);
	strcpy(F.Diretor, diretor);
	strcpy(F.Duracao, duracao);
	strcpy(F.Genero, genero);
	
}

main() {
	setlocale(LC_ALL, "Portuguese");
	filme BatalhaDosVegetais;
	SetFilme(10,"BatalhaDosVegetais","NickPark","1h25min","animacao");
	ImprimeFilme(BatalhaDosVegetais);
}

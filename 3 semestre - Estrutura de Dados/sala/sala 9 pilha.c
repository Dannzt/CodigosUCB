#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#define MAX_SIZE 100


/* Eu falei com o Yugi */

typedef struct{
	int items[MAX_SIZE];
	int top;
}Pilha;

void inicializa(Pilha *pilha){
	pilha -> top = -1;
}

int estaVazia(Pilha *pilha){
	return pilha -> top == -1;
}

int estaCheia(Pilha *pilha){
	return pilha -> top == MAX_SIZE -1;
}

void inseri(Pilha *pilha, int data){
	if(estaCheia(pilha)){
		printf("A pilha está cheia.\n");
	} else {
		pilha -> items[++pilha -> top] = data;
	}
}

int apagar(Pilha *pilha){
	if(estaVazia(pilha)){
		printf("A pilha está vazia.\n");
	} else {
		return pilha -> items[pilha -> top--];
	}
}

struct{
	char nomeObjeto[50], partes[5][10];
	int partesObjeto;
}Objeto;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	Pilha pilha;
	inicializa(&pilha);
	
	printf("Digite o nome do objeto: ");
	scanf("%s", &Objeto.nomeObjeto);
	printf("Digite o número de partes que este objeto possuí: ");
	scanf("%d", &Objeto.partesObjeto);
	
	for(i=0; i < Objeto.partesObjeto; i++){
		printf("Digite o nome dessa parte: ");
		scanf("%s", &Objeto.partes);
		
		inseri(&pilha, Objeto.partes[i]);
		printf("Elemento inserido!\n");
		
		printf("Elemento removido: %d\n", apagar(&pilha));
	}
	return 0;
}

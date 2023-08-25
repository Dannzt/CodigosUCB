1) Elabore um programa onde o usuário informará uma idade entre 1 e 100 (o programa somente continuará ao ser informada uma idade válida)
, caso a idade informada seja múltipla
de 5 imprima na tela somente M5
, caso contrário imprima somente a idade informada.

#include <stdio.h>
#include <stint.h>

int main () {
int idade

while (idade >=1 && <=100)
printf ("Infome uma idade: ");
scanf ("%d", &idade)

if (idade / 5==0){
printf ("m5");
}else{
prinf ("%d", &idade)
}

++
}
return 0;



2) Elabore um programa que receba ATÉ 100 números positivos (O usuário poderá digitar quantos
 valores deseja informar ou receber os números até digitar algum valor negativo)
, ao final será apresentada a quantidade de números múltiplos de 5 
ou se não foram informados múltiplos de 5.

#include <stdio.h>
#include <stint.h>

int main () {
int = num

for ( 0>=; 100<=;++)

printf ("Infome uma idade: ");
scanf ("%d", &num)

if (idade / 5==0){
printf ("numeros multiplos de cinco");
}else{
prinf ("%d", &num)
}



}
return 0;


3) Elabore um programa onde o usuário informará seu nome e sua idade, ao final deverá 
se apresentado na tela o texto conforme o exemplo abaixo:

#include <stdio.h>
#include <stint.h>

int main () {

char = nome [20]
int = idade, idadeSoma

printf ("Infome o seu nome:\n");
scanf (" %c", &nome);
printf ("\n\n");

printf ("Infome a sua idade:\n");
scanf ("%d", &idade);
printf ("\n\n");
idadeSoma = idade + 10;

printf ("nome:",nome)
printf ("idade:",idade)
printf ("Prezado(a) Sr(a). Fulano de Tal\n %d",idade)
printf ("é sua idade atual e em 10 anos será %d",&idadeSoma)
}
return 0;


4) Elabore um programa utilizando a estrutura switch/case onde o 
usuário informará uma operação aritmética utilizando os sinais (+  -  * /) 
, ao final deverá ser apresentado na tela a operação por extenso.

#include <stdio.h>
#include <stint.h>

int main () {

char = operador [40]

printf ("Informe uma operacao (+ - * /):\n");
scanf (" &c", &operador);

	switch (1)
	case (+)
	printf ("A operação informada foi adição &c", &operador);
	
	
		switch (2)
		case (-)
		printf ("A operação informada foi subtração &c", &operador);
	
				switch (3)
				case (*)
				printf ("A operação informada foi multiplicação &c", &operador);
		
		
					switch (4)
					case (/)
					printf ("A operação informada foi divisão &c", &operador);

break;



}
return 0;



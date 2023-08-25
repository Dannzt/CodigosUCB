#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    system ("COLOR 06");
    setlocale (LC_ALL,"portuguese");

int i;
    printf("\n tabela Asc II \n");
        for(i = 0; i < 255; i++) {
        if(i>=65 && i <=90){
        printf("\n %d é o caracter %c ", i,i);
    }
    if(i>=97 && i <=122){
    printf("\n %d é o caracter %c ", i,i);
        }
    }

}

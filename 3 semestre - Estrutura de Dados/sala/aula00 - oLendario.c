#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_L 4
#define NUM_C 4
int main(){
 setlocale(LC_ALL, "Portuguese");
 char str[5][50], aux[50];
 int i, n;
 
 for(i=0;i<=4;i++){
 		printf("Digite a letra: ", i+1);
 		scanf("%s", &str[i]);
 }
 for(i=0;i<=4;n++){
 	
 	for(i=0;i<=3;i++){
 		if(strcmp(str[i], str[i+1]) > 0){
		 	strcmp(aux, str[i]);
		 	strcmp(str[i], str[i+1]);
		 	strcmp(str[i+1], aux);
		 	
			}
  
  }
  }
 	for(i=0;i=4;i++){
 		printf("%s \t", str[i]);
	 }
 
}

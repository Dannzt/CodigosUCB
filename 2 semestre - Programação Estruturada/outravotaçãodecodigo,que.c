
#include <stdio.h>
#include <stdlib.h>
struct ling {
   int qv;            //quantidade de votos
   int cod[99];       //codigos
 }java,php,c;
int main()
{
    int op=1,es,i;   /*Zerando os codigos*/
  for(i=0;i<99;i++){
     java.cod[i]=0;
     php.cod[i]=0;
     c.cod[i]=0;  
    }
  i=0;  
    /*Pedindo a escolha e o codigo*/  
  while (op != 0){
     system("color 7c");  
     printf("   Digite sua escolha = \n\n 1. JAVA\n 2. PHP\n 3. C\n\n");
     scanf("%d",&es);    
     printf(" Digite seu codigo = ");
     if (es==1){
        scanf("%d",&java.cod[i]);
        java.qv++;
        }
     if (es==2){
        scanf("%d",&php.cod[i]);
        php.qv++;
        }
     if (es==3){
        scanf("%d",&c.cod[i]);
        c.qv++;
        }
     i++;  
     printf("\n\n Digite 0 - Sair   ou  1 - Continuar ");  
     scanf("%d",&op);
     system("CLS");
    }
   
  /*Mostrando o resultado*/  
  printf("JAVA obteve %d votos.\n",java.qv);
  printf("PHP obteve %d votos.\n",php.qv);
  printf("C obteve %d votos.\n",c.qv);
 
  if((java.qv > php.qv) && (java.qv > c.qv))
   {printf("JAVA obteve mais votos.\n");}
  if((php.qv > java.qv) && (php.qv > c.qv)){
      printf("PHP obteve mais votos.\n");}
  if((c.qv > php.qv) && (c.qv > java.qv)){
      printf("C obteve mais votos.\n");  }
     
    /* verificando se deu empate*/
   if((c.qv == php.qv) || (c.qv == java.qv)){
        printf("empate na enquete.\n");
   }
   
     
     
  /*Imprimindo as listas*/
  printf("\n\n     -- JAVA --");
  for(i=0;i<99;i++){
     if(java.cod[i] != 0)                
        printf("\n\t %d",java.cod[i]);
    }
  printf("\n\n     -- PHP --");
  for(i=0;i<99;i++){
     if(php.cod[i] != 0)                
        printf("\n\t %d",php.cod[i]);
    }
  printf("\n\n      -- C --");
  for(i=0;i<99;i++){
     if(c.cod[i] != 0)                
        printf("\n\t %d",c.cod[i]);
    }
   
  printf("\n\n");
  system("PAUSE");      
  return 0;
}



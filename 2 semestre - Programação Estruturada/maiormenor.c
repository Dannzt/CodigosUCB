#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <windows.h>

main() {
      int numMaior= 0, numMenor=9999, cont= 0, num= 0;
      
      for (cont=0;cont<4;cont++){
            printf ("Digite um numero:");
            scanf ("%d",&num);
             if (num > numMaior){
                  numMaior = num;
             }
             if (num < numMenor){
                  numMenor = num;
             }
      }
      
      printf ("Menor valor foi %d \n", numMenor);
      printf ("Maior valor foi %d", numMaior);
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      }
      
      

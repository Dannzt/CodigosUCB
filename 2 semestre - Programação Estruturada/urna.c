#include <stdio.h>
#include <stdlib.h>
int cd,cj,cn,ctr,sg,qt=0;
int lj[99],ld[99],ln[99];
int elei=0;
main ()
{
      ctr=1;
            while (ctr != 0) {
            printf("\n digite 12 para votar no Joao ou \n 30 Para votar na Juquinha \n");
            scanf("%d",&sg);
            printf("digite o codigo do eleitor \n");
            scanf("%d",&elei);
            qt++;
            if(sg == 12){
                  cj++;
                  lj[qt]=elei;
                                    }
            if (sg == 30 ){
                  cd ++;
                  ld[qt]=elei;
                  }
            if (cn == 0){
                  cn++;
                  ln[qt]=elei;
            }
            printf(" digite 1 para continuar ou 0 para sair \n");
      scanf("%d",&ctr);
      qt++;
      
	  }
	  }

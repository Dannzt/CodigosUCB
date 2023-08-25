#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"


main() {
      int L,C;
      
      for(L=1;L<78; L++){
      gotoxy(L,1);
      textcolor(12);
      printf ("%c",3);
      gotoxy (L,24);
      printf ("%c",3);
      }
      for (C=1; C<24; C++){
            gotoxy (1,C);
            textcolor(12);
            printf("%c",3);
            gotoxy(78,C);
            printf ("%c",3);
      }
      
      gotoxy(30,12); textcolor(13);
      printf ("Bom dia");
      getch();
      
      
      
      
      //sleep(1);
      //system("cls");
      //sleep(1);
      }
      

#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

int main(void){
int num;
printf ("Gerando 6 valores aleatorios: \n \n");
for (num = 0; num <999999999 ; num++)
{
      gotoxy (rand () % 57,rand () % 24);
textcolor(num+1);

printf ("%d ", rand () % 61);
//getch();
}

return 0;
}

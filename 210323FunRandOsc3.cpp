#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int x,y;
printf("Generando 10 valores Aleatorios:\n");
system ("color e9");
srand (time(NULL));

for (x=1;x<=10;x++)
{
 y=rand();
printf("\nAleatorio,%i,", y);
}
printf("\n¿Que observas?");

system("pause>null");
}

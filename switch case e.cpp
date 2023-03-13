#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

int val, op;
char resp;

do{
 system ("cls");

do{
 printf ("\n Ingresa un valor entero entre 1 y 100");
 scanf ("%i", &val);

 }while (val<1 || val>50);

op=(val>=1)+(val>=11)+(val>=21)+(val>=31)+(val>=41);
 switch(op)
{
case 1:  printf("\nRango 1-10");break;
case 2:  printf("\nRango 11-20");break;
case 3:  printf("\nRango 21-30");break;
case 4:  printf("\nRango 31-40");break;
default: printf ("\nRango 41-50");
}

printf("Si deseas repetir presiona s");

  fflush (stdin);
  scanf("%c", &resp);
}while (resp == 's');
system ("pause>|0|");
}

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

char resp;
int op, edad;

do{
 system ("cls");
 printf ("Ingresa tu edad:");
 scanf  ("%i", &edad);
 printf ("\n");


 if (edad<0|| edad >100)
 printf ("Posiblemente no existes");


  else if (edad >=0 && edad <=4)
  printf ("Eres un tierno, inocente y dulce bebe.");


    else if (edad >=5 && edad <=12)
  printf ("Aun te llegan los reyes magos.");


    else if (edad >=13 && edad <=15)
  printf ("Eres un pre adolecente.");


    else if (edad >=16 && edad <=17)
  printf ("Un adolecente.");


    else if (edad >=18 && edad <=29)
  printf ("Ya puedes ir por las cawamas.");


      else if (edad >=30 && edad <=49)
  printf ("Adulto Maduro con responsabilidades.");


      else if (edad >=50 && edad <=65)
  printf ("Comprendes un par de cosas de la vida.");


      else if (edad >=66 && edad <=75)
  printf ("Seguramente ya tienes nietos.");

  else
  printf ("Eres un sabio adulto mayor.");

  printf ("\n para repetir presiona r:\n");


  fflush (stdin);
  scanf("%c", &resp);
}while (resp == 'r');
system ("pause>XD");
}

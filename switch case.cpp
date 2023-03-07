#include <stdio.h>
#include <stdlib.h>


int main()
{
    int op;
float cent, faren, grados;

printf ("selecciona una opcion:\n");
printf ("1. Centigrado-Farenheit\n");
printf ("2. Farenheit a Centigrados\n");
printf ("3. salir\n Tu Opcion:\n");
scanf ("%i",&op);

system ("cls");


switch (op){

case 1:
    printf("ingresa los grados centigrados: ");
    scanf("%f", &cent);
    faren= (cent*(9/5))+32;
    printf("%i centigrados = %f Farenheit", cent, faren);
break;
case 2:
    printf ("Ingresa los grados en farenheit: ");
    scanf("%f", &faren);
    cent= (faren-32)*(5/9);
    printf ("%f farenheit = %f Centigrados");
break;

default:
    printf ("No hubo nada que calcular");
}
        system("pause>null");

}

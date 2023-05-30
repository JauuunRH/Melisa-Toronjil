#include <stdio.h>  //ESCRIBIR
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
char cadena[30];
int main()
{
   FILE *archivo;

   if ((archivo = fopen("Prueba1.txt", "at")) == NULL)
   {
      fprintf(stderr, "No se puede abrir el archivo.\n");
      exit(1);
   }

      cout<<"Escribe la cadena";
      gets(cadena);
      strcat(cadena,"__");

   fwrite(&cadena, sizeof(cadena),1,archivo);  //Escribe en el archivo la cadena de caracteres

   fclose(archivo);
   system("pause");
   return 0;
}

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
int i=0;
int longitud;
   if ((archivo = fopen("Prueba0.txt", "at")) == NULL)  //abrir el archivo
   {
      fprintf(stderr, "No se puede abrir el archivo.\n");
      exit(1);
   }

      cout<<"Escribe la cadena: ";
      gets(cadena);
      strcat(cadena,"__");
      longitud=strlen(cadena);  // Escribe en el archivo caracter por caracter
   for(i=0;i<longitud;i++)
  {
      fputc(cadena[i],archivo);
      }

   fclose(archivo); //cerrar el archivo
   system("pause");
   return 0;
}

#include <stdio.h>  //Con la modificacion el archivo ya es leido
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include <fstream>

using namespace std;

int main()
{
   FILE *archivo;     //Lee caracter por caracter
   char caracter;
 char nombre[30];
 cout<<"Introduce nombre del archivo: ";
 gets(nombre);

   if ((archivo = fopen(nombre, "rb")) == NULL)
   {
      fprintf(stderr, "No se puede abrir el archivo.\n");
      exit(1);
   }

    while(!feof(archivo))
    {                              //esto ya lee pero caracter por caracter
    caracter=fgetc(archivo);
     cout<<caracter;
    }

   fclose(archivo);
   cout<<endl;
   cout<<endl;
  system("pause");
  return 0;
}

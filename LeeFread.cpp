#include <stdio.h>  //Con la modificacion el archivo ya es leido
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include <fstream>
using namespace std;
int main()
{
   FILE *archivo;

char caracter[256];

   if ((archivo = fopen("AmadoNervo.txt", "rb")) == NULL)
   {
      fprintf(stderr, "No se puede abrir el archivo.\n");
      exit(1);
   }


    while(!feof(archivo))
    {
    fread(&caracter,sizeof(caracter),1,archivo);  //lee cadena de caracteres
     cout<<caracter;
    }

   fclose(archivo);
   cout<<endl;
  system("pause");
  return 0;
}

#include<iostream>
#include<stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

class Archivo{
	FILE *archivo;
	char Nombre[30];
	public:
		Archivo();
		void LeerArchivo();
		void CerrarArchivo();
};

Archivo::Archivo(){
strcpy(Nombre,"AmadoNervo.txt");
}

void Archivo::LeerArchivo(){
	char caracter;

   if ((archivo = fopen(Nombre, "rb")) == NULL)
   {
      fprintf(stderr, "No se puede abrir el archivo.\n");
      exit(1);
   }

    while(!feof(archivo))
    {                              //esto ya lee pero caracter por caracter
    caracter=fgetc(archivo);
     cout<<caracter;
    }
}


void Archivo::CerrarArchivo(){
fclose(archivo);

}

int main()
{
	Archivo ar;
	ar.LeerArchivo();
	ar.CerrarArchivo();
     system("pause");
  return 0;
}

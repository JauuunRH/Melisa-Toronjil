#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

int edad;
float temp;
char sex;

cout<< "Calculadora de caracteres de genero"<<endl;
cout<< "Introduce tu edad: "<<endl;
cin>> edad;

cout<< "Introduce tu temperatura: "<<endl;
cin>> temp;

cout<< "Introduce tu sexo (H o M) "<<endl;
cin>> sex;

cout<< "Tu edad es: "<< edad<<endl;
cout<< "Tu temperatura es: "<< temp<<endl;
cout<< "Tu sexo es: "<< sex<<endl;

return 0;
}

#include <iostream>
using namespace std;

int main(){
system("color 45");
char Nomb [30];
int edad;
float promedio;
char sex [1];

cout<<"**************************"<<endl;
cout<<"Introduce los datos que se te son solicitados"<<endl;

cout<<"Nombre, empezando por apellido: "<<endl;
gets(Nomb);

cout<<"Introduce tu edad"<<endl;
cin>>edad;

cout<<"Introduce tu promedio: "<<endl;
cin>>promedio;

cout<<"Introduce tu sexo [H o M]: "<<endl;
cin>>sex;

cout<<"Tus Datos son: "<<endl;
cout<<"Tu nombre es: "<<endl;
puts(Nomb);

cout<<"Tu edad es: "<<edad;

cout<<"Tu promedio es de: "<<promedio<<endl;
cout<<"Tu sexo es: "<<sex<<endl;

return(0);
}

#include <iostream>
using namespace std;

int main(){
system("color 30");

char Nomb [30];
float calif1, calif2, calif3, calif4, calif5, promedio;

cout<<"**************************"<<endl;
cout<<"Introduce los datos que se te solicita"<<endl;

cout<<"Nombre, empezando por apellido: "<<endl;
gets(Nomb);

cout<<"Introduce tu calificacion: "<<endl;
cin>>calif1;

cout<<"Introduce tu calificacion: "<<endl;
cin>>calif2;

cout<<"Introduce tu calificacion: "<<endl;
cin>>calif3;

cout<<"Introduce tu calificacion: "<<endl;
cin>>calif4;

cout<<"Introduce tu calificacion: "<<endl;
cin>>calif5;

system ("cls");

promedio = (calif1+calif2+calif3)/3;

cout<<"Tu promedio es de: "<<promedio;

    if(promedio>=0 && promedio<=5.9)
    {
        cout<<"\nVamos pensando en cambiar de carrera";
    }

    else if(promedio>=6 && promedio<=7.9)
    {
        cout<<"\nEchale ganas padrino";
    }

    else if(promedio>=8 && promedio<=10)
    {
        cout<<"\neso tilin";
    }
    else
    {
        cout<<"\nNo existe";
    }
return 0;

}

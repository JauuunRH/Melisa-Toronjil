#include <iostream>
#include <string>

using namespace std;

class Celular{
string Pantalla;
float  Precio;
string OS;
string Marca;
float Saldo;

public:
Celular();

void setPantalla(string a);
void setPrecio(float b);
void setOS(string c);
void setMarca (string d);
void setSaldo (float e);

string getPantalla();
float  getPrecio ();
string getOS ();
string getMarca ();
float getSaldo ();
void EnviarMsj();
};

Celular::Celular(){
}

void Celular::setPantalla(string a){
    Pantalla=a;
}
void Celular::setPrecio(float b){
    Precio=b;
}
void Celular::setOS(string c){
    OS=c;
}
void Celular::setMarca(string d){
    Marca=d;
}
void Celular::setSaldo(float e){
    Saldo=e;

}
string Celular::getPantalla(){
return Pantalla;

}
float Celular::getPrecio(){
return Precio;

}
string Celular::getOS(){
return OS;
}
string Celular::getMarca(){
return Marca;
}
float Celular::getSaldo(){
return Saldo;
}

void Celular::EnviarMsj(){
if (Saldo>1)
{
cout<<"Mensaje enviado..."<<endl;
Saldo=Saldo-1;
}


else{
cout<<"Saldo Insuficiente..."<<endl;
}
}
int main(){

 int opcion;


Celular objCelulin;
cout<<"Asignado valores a los atributos del objeto celuar"<<endl;
objCelulin.setMarca("LG");
objCelulin.setPantalla("POLED");
objCelulin.setPrecio(9650.0);
objCelulin.setOS("Android 13");
objCelulin.setSaldo(200);
cout<<"1.Imprimir informacion del celular"<<endl;
cout<<"2.Enviar Mensaje"<<endl;
cout<<"3.Consultar Saldo"<<endl;
cin>>opcion;

switch(opcion){

    case 1: cout<<"Reimprimiendo la informacion del objeto celular"<<endl;
cout<<"El celular "<<objCelulin.getMarca()<<" tiene un precio de "<<objCelulin.getPrecio()<<endl;
cout<<" OS de "<<objCelulin.getOS()<<" Pantalla de "<<objCelulin.getPantalla()<<endl;
cout<<" Saldo de "<<objCelulin.getSaldo();
break;

case 2: objCelulin.EnviarMsj(); break;

case 3: cout<<"Consultando el saldo: "<<objCelulin.getSaldo(); break;
default:cout<<"Opcion no valida";
}
return 0;
}

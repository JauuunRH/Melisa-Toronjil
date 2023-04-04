#include <iostream>
#include <string>

using namespace std;
class Celular{
string Pantalla;
float  Precio;
string SistemaO;
string Marca;
float Saldo;

public:
Celular();

void setPantalla (string a);
void setPrecio (float b);
void setSistemaO(string c);
void setMarca (string d);
void setSaldo (float e);

string getPantalla();
float  getPrecio ();
string getSistemaO();
string getMarca ();
float getSaldo ();
void EnviarMsj();
void Llamada ();
};

Celular::Celular(){
}

void Celular::setPantalla(string a){
    Pantalla=a;
}
void Celular::setPrecio(float b){
    Precio=b;
}
void Celular::setSistemaO(string c){
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

string Celular::getSistemaO(){
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
void Celular::Llamada(){
if (Saldo>5)

{
cout<<"Realizando Movimiento "<<endl;
Saldo=Saldo-5;
}

else{
cout<<"No cuentas con saldo para realizar una llamada."<<endl;
}
}
int main(){
system("color e9");
 int opcion;

char aaa;
Celular objCelulin;
cout<<"Asignando valores a los atributos del objeto celular"<<endl;

objCelulin.setMarca("LG");
objCelulin.setPantalla("POLED");
objCelulin.setPrecio(9650.0);
objCelulin.setSistemaO("Android 13");
objCelulin.setSaldo(700);


do{
cout<<"1. Imprimir informacion del celular"<<endl;
cout<<"2. Enviar Mensaje."<<endl;
cout<<"3. Consultar Saldo."<<endl;
cout<<"4. Realizar llamada."<<endl;
cout<<"5. salir."<<endl;

cin>>opcion;

switch(opcion){

case 1: cout<<" Reimprimiendo la informacion del objeto celular "<<endl;
cout<<"El celular "<<objCelulin.getMarca()<<" Tiene un precio de "<<objCelulin.getPrecio()<<endl;
cout<<"Sistema Operativo de "<<objCelulin.getOS()<<" Pantalla de "<<objCelulin.getPantalla()<<endl;
cout<<"Saldo de "<<objCelulin.getSaldo()<<endl;
break;

case 2: objCelulin.EnviarMsj(); break;

case 3:cout<<"Consultando el saldo..."<<objCelulin.getSaldo(); break;

case 4: objCelulin.Llamada(); break;

case 5: exit (0); break;

default:cout<<"Opcion no valida";}
cout<<" presiona una 'a' para regresar"<<endl;

cin>>aaa;

system ("cls");
}while (aaa=='a');
return 0;
}

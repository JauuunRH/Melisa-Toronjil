#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Celular{
	string Pantalla;
	float Precio;
	string SistemaOperativo;
	string Marca;
	float Saldo;
	public:
		Celular();//constructora sin parametros
		Celular(string a,float b, string c, string d, float e);//constructora con parametros
		void setPantalla(string a);
		void SetPrecio(float b);
		void setSistemaOperativo(string c);
		void setMarca(string d);
		void setSaldo(float e);
		string getPantalla();
		float getPrecio();
		string getSistemaOperativo();
		string getMarca();
		float getSaldo();
		void EnviarMensaje();
		void Llamar();
};

Celular::Celular(){//constructora que no recibe parametros
	Pantalla="ninguno";
	Precio=0.0;
	SistemaOperativo="ninguno";
	Marca="ninguno";
	Saldo=0.0;
}

Celular::Celular(string a,float b,string c, string d, float e){
Pantalla=a;
Precio=b;
SistemaOperativo=c;
Marca=d;
Saldo=e;
}

void Celular::setPantalla(string a){
	Pantalla=a;
}
void Celular::SetPrecio(float b){
	Precio=b;
}
void Celular::setSistemaOperativo(string c){
	SistemaOperativo=c;
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
string Celular::getSistemaOperativo(){
	return SistemaOperativo;
}
string Celular::getMarca(){
	return Marca;
}
float Celular::getSaldo(){
	return Saldo;
}

void Celular::EnviarMensaje(){
	if (Saldo>1)
	{
		cout<<"\nMensaje Enviado..."<<endl;
		Saldo=Saldo-1;
		cout<<"Su saldo es :"<<Saldo;
	}
	else
	cout<<"\nSaldo insuficiente...."<<endl;
}
void Celular::Llamar(){
	if (Saldo>=10)
	{
		cout<<"\nRealizando llamada..."<<endl;
		Saldo=Saldo-10;
		cout<<"Su saldo es :"<<Saldo;
	}
	else
	cout<<"\nSaldo insuficiente...."<<endl;
}
int main()
 {
     Celular objCel(" AMOLED",25000," ANDROID X"," SAMSUNG",63.80);
     cout<<"Reimprimiendo la informacion del objeto Celular"<<endl;
	 cout<<"El Celular:"<<objCel.getMarca()<<" tiene un precio de:"<<objCel.getPrecio();
	 cout<<" con Sistema Operativo:"<<objCel.getSistemaOperativo()<<" y pantalla:"<<objCel.getPantalla();
	 cout<<"\n con saldo de:"<<objCel.getSaldo()<<endl;

     /*
 	//crear el objeto de la clase
	 int opcion;
	 Celular objCel;
	 cout<<"Asignando valores a los atributos del objeto celular"<<endl;
	 objCel.setMarca("Iphone");
	 objCel.setPantalla("AMOLED 2");
	 objCel.SetPrecio(50000.21);
	 objCel.setSaldo(50.0);
	 objCel.setSistemaOperativo("Ios 16");

	 do{
     cout<<"\nSelecciona la opcion deseada:"<<endl;
	 cout<<"1.Imprimir informacion del celular"<<endl;
	 cout<<"2.Enviar Mensaje"<<endl;
	 cout<<"3.Consultar saldo"<<endl;
	 cout<<"4.Realizar llamada"<<endl;
	 cout<<"5.Salir"<<endl;

	 cin>>opcion;
	 cout<<endl;
	 switch(opcion){
	 	case 1:
	 	cout<<"Reimprimiendo la informacion del objeto Celular"<<endl;
	 cout<<"El Celular:"<<objCel.getMarca()<<" tiene un precio de:"<<objCel.getPrecio();
	 cout<<" con Sistema Operativo:"<<objCel.getSistemaOperativo()<<" y pantalla:"<<objCel.getPantalla();
	 cout<<"\n con saldo de:"<<objCel.getSaldo()<<endl;break;
	    case 2:objCel.EnviarMensaje();break;cout<<"\nConsultando saldo:"<<objCel.getSaldo()<<endl;
	    case 3:cout<<"\nConsultando saldo:"<<objCel.getSaldo()<<endl;break;
	    case 4:objCel.Llamar();break;cout<<"\nConsultando saldo:"<<objCel.getSaldo()<<endl;
	    case 5: exit(EXIT_SUCCESS);
	    default:cout<<"opcion no valida";break;

	 }
	 }while(5);
*/
 	return 0;
 }

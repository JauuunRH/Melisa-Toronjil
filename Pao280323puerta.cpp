#include<iostream>
#include<string>

using namespace std;

class Puerta{
string Color;
float Precio;
string Material;
public:
Puerta(); //constructora
void setColor(string x); //setters de cada atributo
void setPrecio (float y);
void setMaterial (string z);

string getColor ();
float getPrecio ();
string getMaterial ();
};

Puerta::Puerta(){
Color="ninguno";
Precio=0.0;
Material="ninguno";
}

void Puerta::setColor(string x){
Color=x;
}

void Puerta::setPrecio(float y){
Precio=y;

}
void Puerta::setMaterial(string z){
Material=z;

}
string Puerta::getColor(){
return Color;

}
float Puerta::getPrecio(){
return Precio;

}
string Puerta::getMaterial(){
return Material;

}
int main(){

Puerta objPuerta; //Creando objeto de la clase puerta, aqui se invoca la constructora
cout<<"La puerta es de color:"<<objPuerta.getColor()<<""<<"Tiene un precio de:";
cout<<objPuerta.getPrecio()<<" y es de "<<objPuerta.getMaterial();

objPuerta.setColor("orange");
objPuerta.setPrecio(450);
objPuerta.setMaterial("Aluminio");
cout<<"Vamos a imprimir la informacion del objeto puerta"<<endl;

cout<<"La puerta es de color:"<<objPuerta.getColor()<<""<<"Tiene un precio de:";
cout<<objPuerta.getPrecio()<<" y es de "<<objPuerta.getMaterial();
return 0;
}

#include<iostream>
#include<string>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Vuelos{
string Aerolinia;
string Ruta;
string Estatus;
int ID;
int Horario;

public:

Vuelos(string a, string b, string c, int d, int e);
void setAerolinia(string a);
void setRuta(string b);
void setEstatus(string c);
void setID (int d);
void setHorario (int e);

string getAerolinia();
string getRuta();
string getEstatus();
int getID();
int getHorario();
};

void Vuelos::setAerolinia(string a){
Aerolinia=a;
}
void Vuelos::setRuta(string b){
Ruta=b;
}
void Vuelos::setEstatus(string c){
Estatus=c;
}
void Vuelos::setID(int d){
ID=d;
}
void Vuelos::setHorario(int e){
Horario=e;
}
string Vuelos::getAerolinia(){
return Aerolinia;
}
string Vuelos::getRuta(){
return Ruta;
}
string Vuelos::getEstatus(){
return Estatus;
}
int Vuelos::getID(){
return ID;
}
int Vuelos::getHorario(){
return Horario;
}
int main(){
system("color e9");

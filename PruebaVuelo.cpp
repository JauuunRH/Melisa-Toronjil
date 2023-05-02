#include<iostream>
#include<string>
#include<time.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;

class Aerolinia{
int ID;
string Aerolinea;
string Ruta;
int Horario;
string Estatus;

public:
Aerolinia(int a, string b, string c, int d, string e);
void setID(int a);
void setAerolinea(string b);
void setRuta(string c);
void setHorario(int d);
void setEstatus(string);

int getID();
string getAerolinea();
string getRuta();
int getHorario();
string getEstatus();
};

Aerolinia::Aerolinia(int a, string b, string c, int d, string e){
ID=a;
Aerolinea=b;
Ruta=c;
Horario=d;
Estatus=e;
}

void Aerolinia::setID(int a){
ID=a;
}

void Aerolinia::setAerolinea(string b){
Aerolinea=b;
}

void Aerolinia::setRuta(string c){
	Ruta=c;
}

void Aerolinia::setHorario(int d){
Horario=d;
}

void Aerolinia::setEstatus(string e){
Estatus=e;
}

int Aerolinia::getID(){
return ID;
}

string Aerolinia::getAerolinea(){
return Aerolinea;
}

string Aerolinia::getRuta(){
return Ruta;
}

int Aerolinia::getHorario(){
return Horario;
}

string Aerolinia::getEstatus(){
return Estatus;
}

void posicion(int a, int b)
{
COORD coord;
coord.X=a;
coord.Y=b;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
system("color e9");
Aerolinia Phoenix [4]={
Aerolinia (27840, "BURFICT",    "Toluca - Argentina",      2410, "Cancelado"),
Aerolinia (74893, "Goldust",    "CDMX - Morelia",          1998, "En Espera"),
Aerolinia (94730, "Pneumonia",  "Chihuahua - Miami",       2021, "Retrasada"),
Aerolinia (36729, "Quanta",     "Baja California - Japon", 2019, "En Espera")};

srand(time(NULL));

posicion (30,1); cout<<"Estatus de la terminal:"<<endl;

for(int s=0;s<=2;s++)
{
posicion (33,3+s);

int i, j, k, l, m;

i=rand()%4;
cout<<Phoenix[i].getID()<<"\t";

j=rand()%4;
cout<<Phoenix[j].getAerolinea()<<"\t";

k=rand()%4;
cout<<Phoenix[k].getRuta()<<"\t";

l=rand()%4;
cout<<Phoenix[l].getHorario()<<"\t";

m=rand()%4;
cout<<Phoenix[m].getEstatus()<<"\t"<<endl;
}
}

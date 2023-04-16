#include <iostream>
#include <string>
#include<windows.h>
#include<time.h>

void posicion(int i, int j)
{
COORD coord;
coord.X=i;
coord.Y=j;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
using namespace std;

class Car{
string Modelo;
float  Kilometraje;
string Marca;
float  Gasolina;
string Color;

public:
Car();

void setModelo (string a);
void setKilometraje (float b);
void setMarca (string c);
void setGasolina (float d);
void setColor (string e);

string getModelo ();
float  getKilometraje ();
string getMarca ();
float  getGasolina ();
string getColor ();

void Adelante ();
void Retroceder ();
};

Car::Car(){
}

void Car::setModelo(string a){
    Modelo=a;
}
void Car::setKilometraje(float b){
    Kilometraje=b;
}
void Car::setMarca(string c){
    Marca=c;
}
void Car::setGasolina(float d){
    Gasolina=d;
}
void Car::setColor(string e){
    Color=e;
}
string Car::getModelo(){
return Modelo;
}

float Car::getKilometraje(){
return Kilometraje;
}

string Car::getMarca(){
return Marca;
}

float Car::getGasolina(){
return Gasolina;
}

string Car::getColor(){
return Color;
}


void Car::Adelante()
{
        system("Color e9");
if (Gasolina>60){
    for(int x=50; x<=70; x++)
    {
posicion(x,10); printf("                                    (..                                         ");
posicion(x,11); printf("                          /**,/,,,,/////////((*** .                             ");
posicion(x,12); printf("        (.,,*,,,,,,,******,,,..,,,,.            .. ,**                          ");
posicion(x,13); printf("   /.*//(%&#%%&#%%%%%%%%#(((((/(/////***,.*//(/////**,..,**********/            ");
posicion(x,14); printf("   ,,**..,/.  ,,, ////////(*,,,,,,,,,,,,,,,,,,((########### ......, #(/@.*      ");
posicion(x,15); printf(" .,*# **,, .,(* *, ////////(/..,,,   ,,,..,,,,,,,,,,   / ,.    ,  .* /**,  (#   ");
posicion(x,16); printf("  *//* ,.*,.././@.* (//////(((((((...,,,,,,..,,,,,/, (//  ,*&#/ #.,,, /**,,,*(  ");
posicion(x,17); printf("        ,   ., / *  .*...............,,,*//(((((((/*,.,(  .. ,/   ,,. /(((/...  ");
posicion(x,18); printf("          ..,,..                                             .,,,.              ");
Sleep(33);
system("cls");
Sleep(1);

    }
Gasolina=Gasolina-30;
posicion(50,22); printf("frenado. ");
system("pause<null");
}

else
{
posicion(50,15); printf("                                         ..#                                   ");
posicion(50,16); printf("                               ,/*((////////*,,,,/,**(                         ");
posicion(50,17); printf("                           (*. ..            ,,*,,..,,,*****,,,,,,,**,,,        ");
posicion(50,18); printf("            //**********,..,**/////(//*.,***/////(((((((#%%%%%%%%%&%%#%#(//,./  ");
posicion(50,19); printf("       *.#((# ,...,,. ###########((.,,,,,,,,,,,,,,,,,*(////////.,/  . .* (**,,  ");
posicion(50,20); printf("   %* ,,**/ *   ,   .., *  .,,,,,,,,,....,,  .,,,..(///////// *..*.., , %* (*,. ");
posicion(50,21); printf("   (.,,,*** /,,....@@.*  //( ,(,,,,,.,,,,,,, .,(((((((/////// *,@(.*..,, , (//  ");
posicion(50,22); printf("  #.../(((* .(* *.**.,   (,.,//(((((((//*,,,...............,, .*.( ,   ,,       ");
posicion(50,23); printf("               .,,,.                                             ..,,.          ");

posicion(50,70); printf("Sin Gasolina");
}
}

void Car::Retroceder()
{
        system("Color e9");
if (Gasolina>50){
    for(int x=50; x>=30; x--)
    {
posicion(x,10); printf("                                    (..                                         ");
posicion(x,11); printf("                          /**,/,,,,/////////((*** .                             ");
posicion(x,12); printf("        (.,,*,,,,,,,******,,,..,,,,.            .. ,**                          ");
posicion(x,13); printf("   /.*//(%&#%%&#%%%%%%%%#(((((/(/////***,.*//(/////**,..,**********/            ");
posicion(x,14); printf("   ,,**..,/.  ,,, ////////(*,,,,,,,,,,,,,,,,,,((########### ......, #(/@.*      ");
posicion(x,15); printf(" .,*# **,, .,(* *, ////////(/..,,,   ,,,..,,,,,,,,,,   / ,.    ,  .* /**,  (#   ");
posicion(x,16); printf("  *//* ,.*,.././@.* (//////(((((((...,,,,,,..,,,,,/, (//  ,*&#/ #.,,, /**,,,*(  ");
posicion(x,17); printf("        ,   ., / *  .*...............,,,*//(((((((/*,.,(  .. ,/   ,,. /(((/...  ");
posicion(x,18); printf("          ..,,..                                             .,,,.              ");
        Sleep(180);
        system("cls");
        Sleep(1);

    }
Gasolina=Gasolina-2;
posicion(50,22); printf("frenado. ");
system("pause<null");
}
else
{
posicion(50,10); printf("                                         ..#                                   ");
posicion(50,11); printf("                               ,/*((////////*,,,,/,**(                         ");
posicion(50,12); printf("                           (*. ..            ,,*,,..,,,*****,,,,,,,**,,,        ");
posicion(50,13); printf("            //**********,..,**/////(//*.,***/////(((((((#%%%%%%%%%&%%#%#(//,./  ");
posicion(50,14); printf("       *.#((# ,...,,. ###########((.,,,,,,,,,,,,,,,,,*(////////.,/  . .* (**,,  ");
posicion(50,15); printf("   %* ,,**/ *   ,   .., *  .,,,,,,,,,....,,  .,,,..(///////// *..*.., , %* (*,. ");
posicion(50,16); printf("   (.,,,*** /,,....@@.*  //( ,(,,,,,.,,,,,,, .,(((((((/////// *,@(.*..,, , (//  ");
posicion(50,17); printf("  #.../(((* .(* *.**.,   (,.,//(((((((//*,,,...............,, .*.( ,   ,,       ");
posicion(50,18); printf("               .,,,.                                             ..,,.          ");

posicion(50,22); printf("Sin Gasolina.");
}
}

int main(){
system("color e9");
int opcion;
int r;
char out;
Car objHW;

objHW.setModelo ("P1");
objHW.setKilometraje(1000);
objHW.setMarca ("Mclaren");
objHW.setGasolina (600);
objHW.setColor ("Azul");
do{

system("Color 01");
cout<<"Selecciona una opcion"<<endl;
cout<<"1: Informacion del carro"<<endl;
cout<<"2: Avanzar 10m"<<endl;
cout<<"3: Retroceder 10m"<<endl;
cout<<"4: Consultar Gasolina"<<endl;
cout<<"5: Salir"<<endl;
cin>>r;
switch(r)
{
case 1: cout<<"Modelo del Auto: "<<objHW.getModelo()<<" Kilometraje: "<<objHW.getKilometraje()<<endl;
cout<<"Marca del Auto: "<<objHW.getMarca()<<" Litros de Gasolina que contiene: "<<objHW.getGasolina()<<endl;
cout<<"Color: "<<objHW.getColor()<<endl;
break;

case 2:
system("cls");
objHW.Adelante(); break;

case 3:
system("cls");
objHW.Retroceder(); break;

case 4:
system("cls");
cout<<"Litros de gasolina sobrante: "<<objHW.getGasolina()<<endl; break;

case 5: exit(0); break;

default:cout<<"Opcion no valida";}
cout<<" presiona a para regresar"<<endl;

cin>>out;

system ("cls");
}while (out=='a');
return 0;
}

#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>

using namespace std;
int Hora, Minuto, Segundo, HoraF, MinutoF, SegundoF, Calificacion;
int bloq=1;
class Pelicula{

private:
string Titulo;
int Duracion;
string Genero;
int Anio;
int Validar;

public:
Pelicula();
Pelicula(string a, int b, string c, int d, int e);
void setTitulo(string a);
void setDuracion(int b);
void setGenero(string c);
void setAnio(int d);
void setValidar(int e);

string getTitulo();
int getDuracion();
string getGenero();
int getAnio();
int getValidar();

void PararPeli();
void PausarPeli();
void AvanzarPeli();
void RegresarPeli();
void RatePeli();
void CheckStatus();
void ReanudarPeli();
};

Pelicula::Pelicula(){
Titulo=" ";
Duracion=0;
Genero=" ";
Anio=0;
Validar=0;
}

Pelicula::Pelicula(string a, int b, string c, int d, int e){
Titulo=a;
Duracion=b;
Genero=c;
Anio=d;
Validar=e;
}

void Pelicula::setTitulo(string a){
Titulo=a;
}

void Pelicula::setDuracion(int b){
Duracion=b;
}

void Pelicula::setGenero(string c){
Genero=c;
}

void Pelicula::setAnio(int d){
Anio=d;
}

void Pelicula::setValidar(int e){
Validar=e;
}

string Pelicula::getTitulo(){
return Titulo;
}

int Pelicula::getDuracion(){
return Duracion;
}

string Pelicula::getGenero(){
return Genero;
}

int Pelicula::getAnio(){
return Anio;
}

int Pelicula::getValidar(){
return Validar;
}

void Pelicula::PararPeli(){
system("cls");
cout<<"La pelicula se ha detenido en el minuto: "<<endl;

cout<<Minuto<<":"<<Segundo<<" / "<<HoraF<<":"<<MinutoF<<":"<<SegundoF<<endl;
cout<<endl<<endl<<"Por lo tanto no se podran ejecutar ninguna hasta que reanudes la pelicula."<<endl;
}

void Pelicula::PausarPeli(){
system("cls");
cout<<"La pelicula se ha pausado en el minuto: ";
cout<<Minuto<<":"<<Segundo<<" / "<<HoraF<<":"<<MinutoF<<":"<<SegundoF<<endl;
}

void Pelicula::AvanzarPeli(){
Minuto+=3;
if (Minuto>=60){
Hora+=1;
Minuto-=60;
}
}

void Pelicula::RegresarPeli(){

if(Minuto>=3||Hora>0){
Minuto-=3;
if(Minuto<0){
Hora-=1;
Minuto+=60;
}
}
else{
cout<<"No es posible regresar mas de 3 minutos."<<endl;
}
}
void Pelicula::RatePeli(){

cout<<"Disfrutaste de la pelicula?"<<endl<<endl;
cout<<"1.- Me gusto"<<endl;
cout<<"2.- No me gusto"<<endl;
cin>>Calificacion;
system("cls");
}
void Pelicula::CheckStatus(){

cout<<"La pelicula va en el minuto: "<<endl;
if (Hora>0) {

cout<<Hora<<":"<<Minuto<<":"<<Segundo<<"/"<<HoraF<<":"<<MinutoF<<":"<<SegundoF<<endl;
}else{
cout<<Minuto<<":"<<Segundo<<" / "<<HoraF<<":"<<MinutoF<<":"<<SegundoF<<endl;
}
}
void Pelicula::ReanudarPeli(){
cout<<"Resumen"<<endl;
}

int main(){
int opc;
int sal=1;

srand(time(NULL));
system("color e9");
Pelicula LaJetee ("La Jetée",2807,"Ciencia Ficcion",1962,0);

Minuto=rand()%60;
Segundo=rand()%60;
HoraF=LaJetee.getDuracion()/60;
MinutoF=LaJetee.getDuracion()%60;
SegundoF=MinutoF/60;

do{

system("cls");
if (Hora>0){
cout <<Hora<<":"<<Minuto<<":"<<Segundo<<"/"<<HoraF<<":"<<MinutoF<<":"<<SegundoF<<endl;
}
else{
cout <<Minuto<<":"<<Segundo<<" / "<<HoraF<<":"<<MinutoF<<":"<<SegundoF<<endl;
}

cout<<"Se esta reproduciendo: La Jetee"<<endl;

cout<<"\nSeleccione una opcion\n"<<endl;

cout<<"1/ Avanzar Pelicula"<<endl;
cout<<"2/ Retroceder Pelicula"<<endl;
cout<<"3/ Pausar Pelicula"<<endl;
cout<<"4/ Detener Pelicula"<<endl;
cout<<"5/ Reanudar Pelicula"<<endl;
cout<<"6/ Ver estatus"<<endl;
cout<<"7/ Calificar la pelicula"<<endl;
cout<<"8/ Quitar pelicula y salir"<<endl;

cin>>opc;
switch(opc){

case 1:
if (bloq !=2&& (Hora<HoraF||(Hora==HoraF&&Minuto<MinutoF)||(Hora==HoraF&&Minuto==MinutoF&&Segundo<SegundoF))){
LaJetee.AvanzarPeli();
}

else{
system("cls");
cout<<"La Pelicula ha terminando, no se puede adelantar ni atrazar." << endl;
system("pause");
}
break;

case 2:
if(bloq<=1){
LaJetee.RegresarPeli();
system("cls");}

else{
system("cls");
cout<<"No es posible hacer nada hasta que se reanude la pelicula."<<endl;
system("pause");
system("cls");}
break;

case 3:
if(bloq<=1){
LaJetee.PausarPeli();
system("pause");
system("cls");}

else{
system("cls");
cout<<"No es posible hacer nada hasta que se reanude la pelicula."<<endl;
system("pause");
system("cls");}
break;

case 4:
if(bloq<=1){
LaJetee.PararPeli();
system("pause");
system("cls");}

else{
system("cls");
cout<<"La pelicula se encuentra en pausa, reanude para volver a las opciones."<<endl;
system("pause");
system("cls");}
break;

case 5:
system("cls");
LaJetee.ReanudarPeli();
system("pause");
system("cls");
break;

case 6: system("cls");
LaJetee.CheckStatus();
system("pause");
system("cls");
break;

case 7:
system("cls");
LaJetee.RatePeli();
break;

case 8: cout<<"Eliminando pelicula."<<endl;
sal=2;
break;
default: cout<<"Opcion:"<<endl;
break;
}
}
while(sal==1);
return 0;
}

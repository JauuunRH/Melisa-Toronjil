#include <iostream>
#include <string>
#include<windows.h>
#include<time.h>

using namespace std;
int NombreE, Frec, Vol;
int bloq=1;

class RadioRota{

private:
string NombreE;
int Frec;
int Vol;


public:
RadioRota();
RadioRota(string a, int b, int c);
void setNombreE(string a);
void setFrec(int b);
void setVol(int c);

string getNombreE();
int getFrec();
int getVol();

void AVolumen();
void DVolumen();
void AUFrecuencia();
void DIFrecuencia();
void CheckRadio();
};

RadioRota::RadioRota(){
NombreE=" ";
Frec=0;
Vol=0;
}

RadioRota::RadioRota(string a, int b, int c){
NombreE=a;
Frec=b;
Vol=c;
}

void RadioRota::setNombreE(string a){
NombreE=a;
}
void RadioRota::setFrec(int b){
Frec=b;
}
void RadioRota::setVol(int c){
Vol=c;
}


string RadioRota::getNombreE(){
return NombreE;
}
int RadioRota::getFrec(){
return Frec;
}
int RadioRota::getVol(){
return Vol;
}


void RadioRota::AVolumen(){
Vol+=1;
if(Vol>=60){
}
else{
cout<<"estas llegando al volumen maximo."<<endl;
}
}
void RadioRota::DVolumen(){
if(Vol>=100){
Vol-=1;
}
else{
cout<<"estas llegando al volumen minimo."<<endl;
}
}
void RadioRota::AUFrecuencia(){
Frec+=1;
if(Frec>=108.9){
}
else{
cout<<"No hay mas estaciones por sintonizar."<<endl;
}
}
void RadioRota::DIFrecuencia(){
Frec-=1;
if(Frec>=74.5){
}
else{
cout<<"No hay mas estaciones por sintonizar."<<endl;
}
}
void RadioRota::CheckRadio(){
cout<<"Estas en la estacion: "<<endl;
if (Frec>74.5){

cout<<NombreE<<":"<<Frec<<endl;
}else{
cout<<"El volumen que tienes actualment es: "<<endl;
cout<<Vol<<endl;
}
}


int main(){
int opc;
int sal=1;

srand(time(NULL));
system("color e9");
RadioRota Lolabum ("Radio Rota",66.6);

NombreE=rand()%60;
Frec=rand()%60;
AUFrecuencia=Lolabum.getFrec()/60;
DIFrecuencia=Lolabum.getFrec()%60;
CheckStatus=DIFrecuencia/60;

do{

system("cls");
if (Frec>0){
cout <<Frec<<":"<<NombreE<<":"<<Segundo<<"/"<<AUFrecuencia<<":"<<DIFrecuencia<<":"<<CheckStatus<<endl;
}
else{
cout <<Minuto<<":"<<Segundo<<" / "<<AUFrecuencia<<":"<<DIFrecuencia<<":"<<CheckStatus<<endl;
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
if (bloq !=2&& (Frec<AUFrecuencia||(Frec==AUFrecuencia&&NombreE<DIFrecuencia)||(Frec==AUFrecuencia&&NombreE==DIFrecuencia&&Segundo<CheckStatus))){
Lolabum.AUFrecuencia();
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

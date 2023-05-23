#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int venta;

class Dulceria{

string DIREC, NNEGOCIO;

public:

Dulceria(string a, string b);
void setDIREC(string a);
void setNNEGOCIO(string b);

string getDIREC();
string getNNEGOCIO();

void PRINTTIENDA();
};

Dulceria::Dulceria(string a, string b){
DIREC=a;
NNEGOCIO=b;
}

void Dulceria::setDIREC(string a){
DIREC=a;
}
void Dulceria::setNNEGOCIO(string b){
NNEGOCIO=b;
}
string Dulceria::getDIREC(){
return DIREC;
}
string Dulceria::getNNEGOCIO(){
return NNEGOCIO;
}

void Dulceria::PRINTTIENDA(){
cout<<"*******************************************************************"<<endl;
cout<<"Bienvenido a "<<NNEGOCIO<<endl;
cout<<" ubicada en "<<DIREC<<endl;
cout<<"*******************************************************************"<<endl;
}

class Dulces{

int CDISP, ID;
string NPROD;
float PRICE;

public:

Dulces (int h, int i, string j, float k);
void setCDISP(int h);
void setID(int i);
void setNPROD(string j);
void setPRICE(float k);

int getCDISP();
int getID();
string getNPROD();
float getPRICE();

void VDISPONIBILIDAD();
void IMPDULCE();
};

Dulces::Dulces(int c, int d, string e, float f){
CDISP=c;
ID=d;
NPROD=e;
PRICE=f;
}

void Dulces::setCDISP(int c){
CDISP=c;
}
void Dulces::setID(int d){
ID=d;
}
void Dulces::setNPROD(string e){
NPROD=e;
}
void Dulces::setPRICE(float f){
PRICE=f;
}

int Dulces::getCDISP(){
return CDISP;
}
int Dulces::getID(){
return ID;
}
string Dulces::getNPROD(){
return NPROD;
}
float Dulces::getPRICE(){
return PRICE;
}

void Dulces::IMPDULCE(){
cout<<"ID: "<<getID()<<endl;
cout<<"Nombre: "<<getNPROD()<<endl;
cout<<"Precio: "<<getPRICE()<<endl;
cout<<"Cantidad: "<<getCDISP()<<endl;
}

void Dulces::VDISPONIBILIDAD(){
cout<<"Hay "<<getCDISP()<<" unidades de "<<getNPROD()<<endl;
}

class Empleado{

int CODE, EDAD;
string NEMP, TURNO;
float VENTAS;

public:
Empleado(int c, int d, string e, string f, float g);
void setCODE(int c);
void setEDAD(int d);
void setNEMP(string e);
void setTURNO(string f);
void setVENTAS(float g);

int getCODE();
int getEDAD();
string getNEMP();
string getTURNO();
float getVENTAS();

void IMPRIMEMPLEADO();
void VENDER(Dulces &dulce);
};

Empleado::Empleado(int h, int i, string j, string k, float g){
CODE= h;
EDAD= i;
NEMP= j;
TURNO= k;
VENTAS = 0;
}

void Empleado::setVENTAS(float g){
VENTAS= g;
}
void Empleado::setCODE(int h){
CODE=h;
}
void Empleado::setEDAD(int i){
EDAD=i;
}
void Empleado::setNEMP(string j){
NEMP=j;
}
void Empleado::setTURNO(string k){
TURNO=k;
}

int Empleado::getCODE(){
return CODE;
}
int Empleado::getEDAD(){
return EDAD;
}
string Empleado::getNEMP(){
return NEMP;
}
string Empleado::getTURNO(){
return TURNO;
}
float Empleado::getVENTAS(){
return VENTAS;
}

void Empleado::IMPRIMEMPLEADO(){
cout<<"Nombre: "<<getNEMP()<<endl;
cout<<"Edad: "<<getEDAD()<<endl;
cout<<"Codigo: "<<getCODE()<<endl;
cout<<"Turno: "<<getTURNO()<<endl;
}

void Empleado::VENDER(Dulces &dulce){

int nuevaCantidad=dulce.getCDISP()-1;
dulce.setCDISP(nuevaCantidad);

float nuevasVentas=getVENTAS()+dulce.getPRICE();
setVENTAS(nuevasVentas);
}

void M1(){
cout<<"\n\nSeleccione usuario\n\n"<<endl<<endl;
cout<<"1.- Administrador"<<endl<<endl;
cout<<"2.- Empleado"<<endl<<endl;
cout<<"3.- Salir"<<endl;
}

void M2(){
cout<<"Desea Continuar"<<endl<<endl;
cout<<"1.- chi"<<endl;
cout<<"2.- nyo"<<endl;
}

void M3(){
cout<<"Continuar como empleado?"<<endl<<endl;
cout<<"1.- no"<<endl;
cout<<"2.- si"<<endl;
}

int main() {
system ("color e9");
Empleado Empleados[2] = {
Empleado(100, 20, "Rosa Roja", "Matutino", 0),
Empleado(200, 22, "Lorenzo Choya", "Vespertino", 0)
};

    Dulces Dulce[5] = {
Dulces(3,501, "Mazapan", 30.6),
Dulces(4, 502, "Skwinkles", 40.0),
Dulces(10, 503, "Tutsi Pop", 38.5),
Dulces(9,  504, "Galletas Animalitos", 60.0),
Dulces(8, 505, "Chicle Bubaloo", 50.2)
};

int opc, opc1, n, ii, us, op2, fin, nven, nemp, jj, smenu, opc2, uss, opc3;
smenu=0;
fin=1;
uss=0;

do{
system("cls");
if(smenu==0&&uss==0){
M1();
cin>>opc;
}

else if(uss==1){
M3();
cin>>opc3;
if(opc3==2){
M1();
}

else if(opc3==1){
opc2=1;
}
}

else{
M2();
cin>>opc2;
if(opc2==1){
opc=1;
}else

{
system("cls");
M1();
cin>>opc;
}
}

switch(opc){

case 1:
system("cls");
cout<<"Seleccione la opcion a realizar"<<endl<<endl;
cout<<"1.- Ver informacion del empleado"<<endl;
cout<<"2.- Ver informacion del producto"<<endl;
cout<<"3.- Ver inventario"<<endl;
cout<<"4.- Ver ganancias"<<endl;
cin>>opc1;
switch(opc1){

case 1:
system("cls");
cout<<"Desea Ingresar: "<<endl<<endl;
cout<<"1.- Rosa Roja"<<endl;
cout<<"2.- Lorenzo Choya"<<endl;
cin>>n;
n-=1;
system("cls");
Empleados[n].IMPRIMEMPLEADO();
smenu++;
system("Pause");

break;

case 2:
system("cls");
cout<<"Seleccione el producto"<<endl<<endl;
cout<<"1.- Mazapan"<<endl;
cout<<"2.- Skwinkles"<<endl;
cout<<"3.- Tutsi Pop"<<endl;
cout<<"4.- Galleta Animalito"<<endl;
cout<<"5.- Chicle Bubaloo"<<endl;
cin>>n;
us-=1;
Dulce[n].IMPDULCE();
smenu++;
system("Pause");
break;

case 3:
system("cls");
for(ii=0;ii<=4;ii++){
Dulce[ii].IMPDULCE();
}
smenu++;
system("Pause");
break;

case 4:
system("cls");
cout<<"Seleccione empleado"<<endl<<endl;
cout<<"1.- Rosa Roja"<<endl;
cout<<"2.- Lorenzo Choya"<<endl;
cin>>nemp;
nemp-=1;

cout<<"Viendo ganancias de "<<Empleados[nemp].getNEMP()<<endl;
cout<<"Ganancias: "<<Empleados[nemp].getVENTAS()<<" pesos"<<endl;
smenu++;
system("Pause");
break;

default:
system("cls");
cout<<"Opcion invalida"<<endl;
system("Pause");
break;
}
break;

case 2: system("cls");
uss=1;
cout<<"Seleccione empleado"<<endl;
cout<<"1.- Rosa Roja"<<endl;
cout<<"2.- Lorenzo Choya"<<endl;
cin>>us;
us-=1;
system("cls");
cout<<"Seleccione una opcion"<<endl;
cout<<"1.- Ver informacion personal"<<endl;
cout<<"2.- Ver informacion del producto"<<endl;
cout<<"3.- Vender"<<endl;
cin>>op2;

switch(op2){
case 1:

system("cls");
Empleados[us].IMPRIMEMPLEADO();
system("Pause");
break;

case 2:
system("cls");
for(ii=0;ii<=4;ii++){
Dulce[ii].IMPDULCE();
}
system("Pause");
break;

case 3:

system("cls");
cout<<"Seleccione el producto a vender"<<endl<<endl;
cout<<"1.- Mazapan"<<endl;
cout<<"2.- Skwinkles"<<endl;
cout<<"3.- Tutsi Pop"<<endl;
cout<<"4.- Galleta Animalito"<<endl;
cout<<"5.- Chicle Bubaloo"<<endl;

cin>>venta;
venta-=1;
system("cls");
cout<<"Ingrese el numero de unidades a vender"<<endl;

cin>>nven;
if(Dulce[venta].getCDISP()< nven){
system("cls");

cout<<"No hay suficiente inventario"<<endl;
system("Pause");
}

else{
system("cls");
for(jj=1;jj<=nven;jj++){
Empleados[us].VENDER(Dulce[venta]);}
cout<<"Has vendido: "<<Dulce[venta].getNPROD()<<endl;
system("Pause");
}


break;

default: cout<<"Opcion invalida"<<endl;
break;
}
break;

case 3: system("cls");
cout<<"Saliendo..."<<endl;
fin=2;
break;

default: system("cls");
cout<<"Opcion invalida"<<endl;
system("pause");
}


}while(fin==1);

return 0;
}

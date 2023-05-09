#include <string>
#include <iostream>

using namespace std;

int CANT;
float D1, D2, AUX1, AUX2;

class Dulceria{
string DIR;
string NNEGOCIO;

public:

Dulceria();
Dulceria(string a, string b);
void setDIR(string a);
void setNNEGOCIO(string b);

string getDIR();
string getNNEGOCIO();

void Ganancias();
};

Dulceria::Dulceria(){
DIR="Ninguno";
NNEGOCIO="Ninguno";
}

Dulceria::Dulceria(string a, string b){
DIR=a;
NNEGOCIO=b;
}
void Dulceria::setDIR(string a){
DIR=a;
}
void Dulceria::setNNEGOCIO(string b){
NNEGOCIO=b;
}
string Dulceria::getDIR(){
return DIR;
}
string Dulceria::getNNEGOCIO(){
return NNEGOCIO;
}

class Empleados{
int COD, AGE;
string NEMP, TURN;

public:

Empleados();
Empleados(int c, int d, string e, string f);
void setCOD(int c);
void setAGE(int d);
void setNEMP(string e);
void setTURN(string f);

int getCOD();
int getAGE();
string getNEMP();
string getTURN();
};

Empleados::Empleados(){
COD=00;
AGE=00;
NEMP="Ninguno";
TURN="Ninguno";
}

Empleados::Empleados (int c, int d, string e, string f){
COD=c;
AGE=d;
NEMP=e;
TURN=f;
}

void Empleados::setCOD(int c){
COD=c;
}
void Empleados::setAGE(int d){
AGE=d;
}
void Empleados::setNEMP(string e){
NEMP=e;
}
void Empleados::setTURN(string f){
TURN=f;
}

int Empleados::getCOD(){
return COD;
}
int Empleados::getAGE(){
return AGE;
}
string Empleados::getNEMP(){
return NEMP;
}
string Empleados::getTURN(){
return TURN;
}

class Dulces{

int CDISP, ID;
string NPROD;
float PRICE;

public:

Dulces (int g, int h, string i, float j);
void setCDISP(int g);
void setID(int h);
void setNPROD(string i);
void setPRICE(float j);

int getCDISP();
int getID();
string getNPROD();
float getPRICE();

void VenderR();
void VenderL();
};

Dulces::Dulces(int g, int h, string i, float j){
CDISP=g;
ID=h;
NPROD=i;
PRICE=j;
}

void Dulces::setCDISP(int g){
CDISP=g;
}
void Dulces::setID(int h){
ID=h;
}
void Dulces::setNPROD(string i){
NPROD=i;
}
void Dulces::setPRICE(float j){
PRICE=j;
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

void Dulceria::Ganancias(){
cout<<"Ganancias de Rosa\n$"<<D1<<"\n\n";

cout<<"Ganancias de Lorenzo\n$"<<D2<<"\n\n";
}

void Dulces::VenderR(){
cout<<"Disponibilidad:"<<CDISP<<endl;
cout<<"Cantidad a vender:\n$"<<PRICE<<endl;
cin>>CANT;

if (CANT<=CDISP)
{
CDISP=CDISP-CANT;
AUX1=CANT*PRICE;
D1=AUX1+D1;
}

else if(CANT>CDISP)
{
cout<<"No se cuenta con inventario.\n";
}
        cout<<"Se ha ingresado: "<<AUX1<<endl;
        cout<<"Gracias por su compra.\n";
}

void Dulces::VenderL(){
cout<<"Cantidad Disponible:"<<CDISP<<endl;

cout<<"Cantidad a vender:\n$"<<PRICE<<endl;
cin>>CANT;

if (CANT<=CDISP){

CDISP=CDISP-CANT;

AUX2=CANT*PRICE;
D2=AUX2+D2;
}

else if(CANT>CDISP){

cout<<"Inventario Insuficiente.\n";
}

cout<<"Se ha ingresado $"<<AUX2<<endl;
cout<<"Compra realizada, gracias!\n";
}

int main(){
system ("color e9");
Dulceria Candy={Dulceria("Calle Venustiano Carranza", "Dulceria Candy")};

Empleados Empleado[]=
{Empleados (100, 20, "Rosa Roja", "Matutino"), Empleados (200, 22, "Lorenzo Choya", "Vespertino")};

Dulces DCandy[]={
Dulces   (10,503, "Tutsi Pop"         , 50.2),
Dulces   (9,504, "Galletas Animalitos", 50.2),
Dulces   (8,505, "Chicle Bubaloo"     , 50.2),
Dulces   (4,502, "Skwinkles"          , 50.2),
Dulces   (3,501, "Mazapan"            , 50.2)};

int opc, i;
char bck;
do{
cout<<".,,,*** /,,....@@.*  //( ,.,,,*** /,,....@@.*  //( ,.,,,*** /,,....@@.*  //( ,"<<endl;
cout<<".,,,*** /,,....@@.*  //( ,"<<Candy.getNNEGOCIO()<<".,,,*** /,,....@@.*  //( ,*"<<endl;
cout<<".,,,*** /,,....@@.*  //( ,.,,,*** /,,....@@.*  //( ,.,,,*** /,,....@@.*  //( ,"<<endl<<endl;

cout<<"Ingresa"<<endl;
cout<<"1:Administrador\n 2:Empleado\n 3:Cerrar\n";
cin>>opc;

system("cls");

switch(opc)
{
case 1:
cout<<"1:Ver informacion del empleado\n 2:Ver informacion del producto\n 3:Consultar inventario\n";
cout<<"4:Consultar ganancias\n";
cin>>opc;

switch(opc)
{
case 1:
cout<<"Selecciona el Empleado\n1:Lorenzo \n2:Roja\n"<<endl;
cin>>opc;
if (opc==1)

cout<<"Nombre:"<<Empleados[0].getNEMP()<<"\nID:"<<Empleados[0].getCOD()<<endl;
cout<<"Edad:"<<Empleados[0].getAGE()<<"\nTurno:"<<Empleados[0].getTURN();

else if (opc==2)
{
cout<<"Nombre:"<<Empleados[0].getNEMP()<<"\nID:"<<Empleados[0].getCOD()<<endl;
cout<<"Edad:"<<Empleados[0].getAGE()<<"\nTurno:"<<Empleados[0].getTURN();
} break;


case 2:
cout<<"Selecciona el producto\n0:Mazapan \n1:Skwinkles \n2:Tutsi Pop \n3:Galleta de animalito \n4:Chicle Bubaloo\n";
cin>>opc;
if (opc==1)

{
cout<<"El producto es:\nID  Nombre\n\tPrecio\tCantidad"<<endl;
cout<<DCandy[0].getID()<<" "<<DCandy[0].getNPROD()<<"\t"<<DCandy[0].getPRICE()<<"\t"<<DCandy[0].getCDISP()<<endl<<endl;
}
else if (opc==2)
{
cout<<"El producto es:\nID  Nombre\n\tPrecio\tCantidad"<<endl;
cout<<DCandy[1].getID()<<" "<<DCandy[1].getNPROD()<<"\t"<<DCandy[1].getPRICE()<<"\t"<<DCandy[1].getCDISP()<<endl<<endl;
}

else if (opc==3)
{
cout<<"El producto es:\nID  Nombre\n\tPrecio\tCantidad"<<endl;
cout<<DCandy[2].getID()<<" "<<DCandy[2].getNPROD()<<"\t"<<DCandy[2].getPRICE()<<"\t"<<DCandy[2].getCDISP()<<endl<<endl;
}
else if (opc==4)
{
cout<<"El producto es:\nID  Nombre\n\tPrecio\tCantidad"<<endl;
cout<<DCandy[3].getID()<<" "<<DCandy[3].getNPROD()<<"\t"<<DCandy[3].getPRICE()<<"\t"<<DCandy[3].getCDISP()<<endl<<endl;
}
else if (opc==5)
{
cout<<"El producto es:\nID  Nombre\n\tPrecio\tCantidad"<<endl;
cout<<DCandy[4].getID()<<" "<<DCandy[4].getNPROD()<<"\t"<<DCandy[4].getPRICE()<<"\t"<<DCandy[4].getCDISP()<<endl<<endl;
}
break;

case 3:
cout<<"El inventario es:\nID  Nombre            \tPrecio\tCantidad"<<endl;
cout<<DCandy[0].getID()<<" "<<DCandy[0].getNPROD()<<"\t"<<DCandy[0].getPRICE()<<"\t"<<DCandy[0].getCDISP()<<endl<<endl;
cout<<DCandy[1].getID()<<" "<<DCandy[1].getNPROD()<<"\t"<<DCandy[1].getPRICE()<<"\t"<<DCandy[1].getCDISP()<<endl<<endl;
cout<<DCandy[2].getID()<<" "<<DCandy[2].getNPROD()<<"\t"<<DCandy[2].getPRICE()<<"\t"<<DCandy[2].getCDISP()<<endl<<endl;
cout<<DCandy[3].getID()<<" "<<DCandy[3].getNPROD()<<"\t"<<DCandy[3].getPRICE()<<"\t"<<DCandy[3].getCDISP()<<endl<<endl;
cout<<DCandy[4].getID()<<" "<<DCandy[4].getNPROD()<<"\t"<<DCandy[4].getPRICE()<<"\t"<<DCandy[4].getCDISP()<<endl<<endl;
}
break;

case 4:
cout<<"Ganancias\n";
Candy.Ganancias();
break;

Default:
cout<<"Opcion no valida";
}break;

case 2:
cout<<"Usuario: \n1:Rosa Roja\n2 Lorenzo Choya\n";
cin>>opc;

if (opc==1){
system("cls");
cout<<"Selecciona una opcion.\n1:Ver informacion personal\n2:Ver informacion del producto\n3:Vender\n";
cin>>opc;
switch(opc)
}

case 1:
cout<<"Nombre:"<<Empleados[0].getNombreEm()<<"\nID:"<<Empleados[0].getCodigo()<<endl;
cout<<"Edad:"<<Empleados[0].getEdad()<<"\nTurno:"<<Empleados[0].getTurno();
break;

case 2:
cout<<"Se muestra el inventario:\nID  Nombre            \tPrecio\tCantidad"<<endl;
cout<<DCandy[0].getID()<<" "<<DCandy[0].getNPROD()<<"\t"<<DCandy[0].getPRICE()<<"\t"<<DCandy[0].getCDISP()<<endl<<endl;
cout<<DCandy[1].getID()<<" "<<DCandy[1].getNPROD()<<"\t"<<DCandy[1].getPRICE()<<"\t"<<DCandy[1].getCDISP()<<endl<<endl;
cout<<DCandy[2].getID()<<" "<<DCandy[2].getNPROD()<<"\t"<<DCandy[2].getPRICE()<<"\t"<<DCandy[2].getCDISP()<<endl<<endl;
cout<<DCandy[3].getID()<<" "<<DCandy[3].getNPROD()<<"\t"<<DCandy[3].getPRICE()<<"\t"<<DCandy[3].getCDISP()<<endl<<endl;
cout<<DCandy[4].getID()<<" "<<DCandy[4].getNPROD()<<"\t"<<DCandy[4].getPRICE()<<"\t"<<DCandy[4].getCDISP()<<endl<<endl;
break;
case 3:
cout<<"Dulce a vender? \n0:Mazapan \n1:Skwinkles \n2:Tutsi Pop \n3:Galleta de animalito \n4:Chicle Bubaloo\n";
cin>>i;
i=i;
DCandy[i].VenderR();
break;
}
}
else if(opc==2) //Lorenzo
break;
default: return 0;
}
cout<<"\n\nPresiona 'b' para regresar a elegir usuario"<<endl;
cin>>bck;
system ("cls");
    }while(bck=='s');
}

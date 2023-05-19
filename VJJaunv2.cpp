#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

using namespace std;

int V=3,
BLOQ,
P01=0, P02=0, P03=0, P04=0;
GOVR=0,

void level01()
{

if(P01>=0&&V>0){

char RESP[20];
char SOLU[10][25]=

"NUNCA",
"OIDOS SORDOS",
"EL TUERTO ES REY",
"LE LLEGA SU SABADO"
"BIEN NO VENGA",
"CUERPO QUE LO AGUANTE",
"A AULLAR SE ENSENIA",
"POCO APRIETA",
"BUENA CARA",
"AMANECE MAS TEMPRANO"};

string PHRAS[]={

"Más vale tarde que...",
"A palabras necias...",
"En tierra de ciegos...",
"A cada chancho...",
"No hay mal que por...",
"No hay mal que dure cien años ni...",
"El que con lobos anda..."
"El que mucho abarca..."
"A mal tiempo..."
"No por mucho madrugar..."};

srand(time(NULL));
int r;
r=rand()%10;
BLOQ=r;

printf("Nivel 1\n\n Completa de manera correcta los siguientes refranes de la cultura mexicana\n\n");
printf (PHRAS[r] "...?\n\nIngresa tu respuesta:\n");
int a, b, c;

a= rand() %10;
b= rand() %10;
c= rand() %10;

while (a==b||a==c||b==c||a != r&&b != r&&c !=r){

a= rand() %10;
b= rand() %10;
c= rand() %10;}

printf("Las posibles respuestas son:\n1."<<SOLU[a]<<"\n2."<<SOLU[b]<<"\n3."<<SOLU[c]);

fflush(stdin);
gets(RESP);
strupr(RESP);

while(strcmp(RESP,SOLU[r])!=0 &&V>0){

system("cls");
V--;

printf("\nTe haz equivocado, aun cuentas con estas "<<V<<" vidas\n\n");
if(V>0){

srand(time(NULL));
r=rand()%10;
BLOQ=r;
printf(PHRAS[r]<<"...?\n\nIngresa tu respuesta:\n");
srand(time(NULL));

a=rand()%10;
b=rand()%10;
c=rand()%10;

while(a!=r && c!=r && b!=r){

a=rand()%10;
b=rand()%10;
c=rand()%10;}

printf("Te dejo las posibles respuestas:\n1."<<SOLU[a]<<"\n2."<<SOLU[b]<<"\n3."<<SOLU[c]);
fflush(stdin);
gets(RESP);
strupr(RESP);}}

if(strcmp(RESP,SOLU[r])==0){
printf("\nFelicidades! Tu respuesta es correcta");
P01=P01+1;}

else{

printf("\nSe te acabaron las vidas, la respuesta era:"<<SOLU[r]);}

else{

if(V==0){
printf("\nNo cuentas con vidas\n");}

else{

printf("\nAun no puedes acceder a este nivel, sigue jugando para desbloquearlo!\n");
}}}

void level2()
{

void level03(){
if(P01>=1 && P02>=1 &&V>0){

int p;

printf("TERCER NIVEL! \nTendras que mencionar las capitales de los paises mas importantes del mundo\n");

char RESP[20];
char SOLU[15][25]={
"BERLÍN","PARÍS",
"LONDRES","CDMX",
"WASHINGTON","BRASILIA",
"MOSCÚ","PEKÍN",
"NUEVA DELHI","TOKIO"};

string GCOUNTRY[]={
"Japón","India","China",
"Rusia","Brasil","Estados Unidos",
"Mexico","Reino Unido","Francia","Alemania"};

srand(time(NULL));

p=rand()%10;
printf("1/la capital de"GCOUNTRY[p]"es""...?");

fflush(stdin);
gets(RESP);
strupr(RESP);

while(strcmp(RESP,SOLU[p])!=0&&V>0){

system("cls");
V--;

printf("Te haz equivocado, aun cuentas con "<<V<<" vidas\n";
if(V>0){

p=rand()%10;
printf("1/la capital de"GCOUNTRY[p]"es""...?");

fflush(stdin);
gets(RESP);
strupr(RESP);
}}

if(strcmp(RESP,SOLU[p])==0){

printf("Felicidades, tu respuesta es correcta");
system("pause>null");}

else{

printf("Es una pena que se te hayan acabado las vidas, la respuesta correcta era: ")SOLU[p];
GOVR=GOVR+1;}

system("cls");

if(GOVR==0){

srand(time(NULL));
p=rand()%10;

printf("2/La capital de"GCOUNTRY[p]"es""...?");

fflush(stdin);
gets(RESP);
strupr(RESP);

while(strcmp(RESP, SOLU[p])!=0&&V>0){

system("cls");
V--;

printf("Te haz equivocado, aun cuentas con "<<V<<" vidas\n";
if(V>0){

p=rand()%10;

printf("2/La capital de"GCOUNTRY[p]"es""...?");

fflush(stdin);
gets(RESP);
strupr(RESP);}}

if(strcmp(RESP,SOLU[p])==0){

printf("Felicidades, tu respuesta es correcta");
system("pause>null");}

else{
printf("Es una pena que se te hayan acabado las vidas, la respuesta correcta era: ")SOLU[p];
GOVR=GOVR+1;
}}

system("cls");

if(GOVR==0)
{

srand(time(NULL));
p=rand()%10;

printf("3/La capital de"GCOUNTRY[p]"es""...?");

fflush(stdin);
gets(RESP);
strupr(RESP);

while(strcmp(RESP,SOLU[p])!=0&&V>0){

system("cls");
V--;

printf("Te haz equivocado, aun cuentas con "<<V<<" vidas\n";
if(V>0){
p=rand()%10;

printf("3/La capital de"GCOUNTRY[p]"es""...?");

fflush(stdin);
gets(RESP);
strupr(RESP);}}

if(strcmp(RESP,SOLU[p])==0){

printf("\nFelicidades!, todas tus respuestas han sido correctas");
P03=P03+1;
system("pause>null");}

else{

printf("Es una pena que se te hayan acabado las vidas, la respuesta correcta era: ")SOLU[p];
GOVR=GOVR+1;
}}}

else{

if(V==0){

printf("\nNo cuentas con vidas");}

else{

printf("No cuentas con nivel suficiente para pasar este nivel, sigue jugando\n");
}}}
if(P01>=1 && V>0){
char RESP[20];
char SOLU[10][25]={

"NUNCA",
"OIDOS SORDOS",
"EL TUERTO ES REY",
"LE LLEGA SU SABADO"
"BIEN NO VENGA",
"CUERPO QUE LO AGUANTE",
"A AULLAR SE ENSENIA",
"POCO APRIETA",
"BUENA CARA",
"AMANECE MAS TEMPRANO"};

string PHRAS[]={

"Más vale tarde que",
"A palabras necias",
"En tierra de ciegos",
"A cada chancho",
"No hay mal que por",
"No hay mal que dure cien años ni",
"El que con lobos anda"
"El que mucho abarca"
"A mal tiempo"
"No por mucho madrugar"};

srand(time(NULL));
int r, rr;
r=rand()%10;
while(BLOQ==r){
r=rand()%10;
}

printf("SEGUNDO NIVEL! Un poco mas de dificultad, nada fuera de este mundo");
printf(PHRAS[r]<<"... \n\n No cuentas con ayuda, da tu respuesta\n");

fflush(stdin);
gets(RESP);
strupr(RESP);

while(strcmp(RESP,SOLU[r])!=0&&V>0){
system("cls");
V--;

printf("Te haz equivocado, aun cuentas con "<<V<<" vidas\n";
if(V>0){

r=rand()%10;
while(BLOQ==r){
r=rand()%10;
}

cout<<PHRAS[r]<<"...?\n\nIngresa tu respuesta\n";
fflush(stdin);
gets(RESP);
strupr(RESP);
}}

if(strcmp(RESP,SOLU[r])==0){

printf("\nTu respuesta es correcta";)}

else{

printf("Haz terminado con tus vidas, la respuesta correcta era: " SOLU[r]);
GOVR=GOVR+1;}

system("cls");

if(GOVR==0){

srand(time(NULL));
rr=rand()%10;
while(BLOQ==rr && r==rr){

rr=rand()%10;}

cout<<endl<<PHRAS[rr]<<"...?\n\nIngresa tu respuesta:\n";
fflush(stdin);
gets(RESP);
strupr(RESP);

while(strcmp(RESP,SOLU[rr])!=0&&V>0){

system("cls");
V--;

printf("Te haz equivocado, aun cuentas con "<<V<<" vidas";
if(V>0){

r=rand()%10;
while(bloq==rr){
rr=rand()%10;}

printf(frase[rr] "...? Ingresa tu respuesta");
fflush(stdin);
gets(RESP);
strupr(RESP);}}

if(strcmp(RESP,SOLU[rr])==0){

printf("Las respuestas correctas eran.");
P02=P02+1;}

else{
printf("Haz terminado con tus vidas, la respuesta correcta era: " SOLU[r])
}}

else{

printf("\nFin\n");}}

else{

if(V==0){
printf("No cuentas con vidas suficientes");
}

else{
printf("No cuentas con niveles suficientes para seguir adelante, sigue bloqueado");
}}}

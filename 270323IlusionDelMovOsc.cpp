#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void posicion (int i, int j){

COORD coord;
coord.X=i;
coord.Y=j;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main (){

int a,b;
srand(time(NULL));
for(a=0;a<=1000;a++){

b=1 +rand()%255;
posicion(50,12);printf("caracter: %c", b);
Sleep(80);
}

posicion(60,20);
printf("Programa Finalizado");
system("pause>null");

}


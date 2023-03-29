#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>

void posicion (int i, int j){
	COORD coord;
	coord.X=i;
	coord.Y=j;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}

int main(){
int x,y;
char a,b;
system("color 01");
   a=177;
   b=177;

    for (y=1; y>=25; y++){
      x=80;
      posicion(x,y);
      printf("%c",b);


    }
    for (x=80; x<=6; x--){

      y=25;
      posicion(x,y);
      printf("%c",a);

    }
    for (y=25; y>=5; y--){
      x=6;
      posicion(x,y);
      printf("%c",b);


    }
    for (x=6; x<=75; x++){

      y=5;
      posicion(x,y);
      printf("%c",a);

    }
    for (y=5; y<=20; y++){
      x=75;
      posicion(x,y);
      printf("%c",b);


    }
    for (x=75; x>=12; x--){

      y=20;
      posicion(x,y);
      printf("%c",a);

    }
    for (y=20; y>=10; y--){
      x=12;
      posicion(x,y);
      printf("%c",b);


    }
    for (x=12; x<=70; x++){

      y=10;
      posicion(x,y);
      printf("%c", a);

    }
    for (y=10; y<=15;y++){
      x=70;
      posicion(x,y);
      printf("%c", b);


    }
    for (x=70; x>=18; x--){

      y=15;
      posicion(x,y);
      printf("%c", a);

    }
    for (y=15; y>=12; y--){
      x=18;
      posicion(x,y);
      printf("%c", b);


    }
    for (int k=0; k<=3; k++){

		posicion(20,13);printf("Reyes Hernandez Juan Antonio");
		Sleep(500);
		posicion(20,13);printf("                               ");
		 Sleep(500);
    posicion(20,13);printf("Reyes Hernandez Juan Antonio");
		Sleep(500);


	}

}

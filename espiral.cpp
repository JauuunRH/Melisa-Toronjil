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
int m,n;
char num1,num2;
system("color 01");
   num1=219;
   num2=219;

	for (m=0; m<=177; m++){

      n=0;
      posicion(m,n);
      printf("%c",num1);
     Sleep(30);
    }
    for (n=1; n<=25; n++){
      m=80;
      posicion(m,n);
      printf("%c",num2);
      Sleep(30);

    }
    for (m=80; m>=6; m--){

      n=25;
      posicion(m,n);
      printf("%c",num1);
     Sleep(30);
    }
    for (n=25; n>=5; n--){
      m=6;
      posicion(m,n);
      printf("%c",num2);
      Sleep(30);

    }
    for (m=6; m<=75; m++){

      n=5;
      posicion(m,n);
      printf("%c",num1);
     Sleep(30);
    }
    for (n=5; n<=20; n++){
      m=75;
      posicion(m,n);
      printf("%c",num2);
      Sleep(30);

    }
    for (m=75; m>=12; m--){

      n=20;
      posicion(m,n);
      printf("%c",num1);
     Sleep(30);
    }
    for (n=20; n>=10; n--){
      m=12;
      posicion(m,n);
      printf("%c",num2);
      Sleep(30);

    }
    for (m=12; m<=70; m++){

      n=10;
      posicion(m,n);
      printf("%c", num1);
     Sleep(30);
    }
    for (n=10; n<=15; n++){
      m=70;
      posicion(m,n);
      printf("%c", num2);
      Sleep(30);

    }
    for (m=70; m>=18; m--){

      n=15;
      posicion(m,n);
      printf("%c", num1);
     Sleep(30);
    }
    for (n=15; n>=12; n--){
      m=18;
      posicion(m,n);
      printf("%c", num2);
      Sleep(30);

    }
    for (int k=0; k<=3; k++){
		posicion(20,13);printf("Reyes Hernandez Juan Antonio");
		 Sleep(500);

	}

}

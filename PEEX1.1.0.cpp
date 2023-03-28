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
	char gb,bv;
    system("color 02");
 gb=219;
 bv=219;

	for (m=0; m<=80; m++){

      n=0;
      posicion(m,n);
      printf("%c",gb);
     Sleep(10);
    }
    for (n=1; n<=25; n++){
      m=80;
      posicion(m,n);
      printf("%c",bv);
      Sleep(10);

    }
    for (m=80; m>=6; m--){

      n=26;
      posicion(m,n);
      printf("%c",gb);
     Sleep(10);
    }
    for (n=25; n>=5; n--){
      m=6;
      posicion(m,n);
      printf("%c",bv);
      Sleep(10);

    }
    for (m=6; m<=75; m++){

      n=5;
      posicion(m,n);
      printf("%c",gb);
     Sleep(10);
    }
    for (n=5; n<=20; n++){
      m=75;
      posicion(m,n);
      printf("%c",bv);
      Sleep(10);

    }
    for (m=75; m>=12; m--){

      n=20;
      posicion(m,n);
      printf("%c",gb);
     Sleep(10);
    }
    for (n=20; n>=10; n--){
      m=12;
      posicion(m,n);
      printf("%c",bv);
      Sleep(10);

    }
    for (m=12; m<=70; m++){

      n=10;
      posicion(m,n);
      printf("%c",gb);
     Sleep(10);
    }
    for (n=10; n<=15; n++){
      m=70;
      posicion(m,n);
      printf("%c",bv);
      Sleep(10);

    }
    for (m=70; m>=18; m--){

      n=15;
      posicion(m,n);
      printf("%c",gb);
     Sleep(10);
    }
    for (n=15; n>=12; n--){
      m=18;
      posicion(m,n);
      printf("%c",bv);
      Sleep(10);

    }
    for (int k=0; k<=3; k++){
		posicion(20,13);printf("Leonardo Lopez");
		 Sleep(1000);

	}




    system("pause>null");
}


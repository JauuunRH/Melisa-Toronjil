#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>

void posicion (int i, int j){

COORD coord;
coord.X=i;
coord.Y=j;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main(){

int dado1, dado2, sum, a;

    do{
        system("cls");
        printf("¿Que disco eres?\n");
        printf("Presione una tecla para tirar los dados: ");
        system("pause > null");
        srand (time (NULL));

        /*
        dado1= 1+rand()%6;
        dado2= 1+rand()%6;
        printf("\nDado1 = %i\nDado2= %i", dado1, dado2);
        */
    posicion(40,12);printf("Dado 1: ");posicion(60,12);printf("Dado 2: ");
    for (a=0; a<=10; a++){

        dado1= 1 + rand()%6; dado2 = 1 + rand()%6;
        posicion(50,12); printf("%i", dado1);posicion(70,12);printf("%i", dado2);
        Sleep(80);

    }

        sum = dado1+ dado2;
        printf("\nLa suma de los dados es: %i", sum);
        printf("\nEres: ");

        switch(sum){

    case 2:
        printf("Blue Rev");
        break;
    case 3:
        printf("Ants From Up There");
        break;
    case 4:
        printf("Bitches Brew");
        break;
    case 5:
        printf("Limbo");
        break;
    case 6:
        printf("By the Time I Get to Phoenix");
        break;
    case 7:
        printf("SCARING THE HOES");
        break;
    case 8:
        printf("De todas las flores");
        break;
    case 9:
        printf("To Pimp a Butterfly");
        break;
    case 10:
        printf("Madvillainy");
        break;
    case 11:
        printf("UGLY");
        break;

    default:
        printf("BAD mode");
        }

        printf("\nPresiona r para repetir: ");
        fflush(stdin);
        sum = getchar();


    }while (sum == 114);
    system("pause > lol");
}

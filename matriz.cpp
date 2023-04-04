#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>

int main(){
int c, r, i, j;

printf("Indica los numeros de renglones para la matriz:");
scanf("%i",&r);


printf("Indica los numeros de columnas para la matriz:");
scanf("%i",&c);


int mat[r][c];

srand(time(NULL));

    for (i=0; i<r; i++){

          for (j=0; j<c; j++){
            mat[i][j]= 1 + rand()%150;
        }
    }
system ("cls");
printf("la matriz es: \n");
    for(i=0; i<r; i++)
    {
        for (j=0; j<c; j++){
            printf("%i\t", mat[i][j]);
        }
        printf("\n");
    }
printf("\n son todas las variables la matriz");
system("pause>null");
}

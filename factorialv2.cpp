#include <iostream>
using namespace std;

int main(){
int num, factorial = 1;

   //Pedir al usuario que ingrese un numero
cout<<"Ingresa un numero entero 1 y 10:";
cin>>num;

   //Validar que el numero este en el rango permitido
   if(num<1 || num>10){
cout<<"El numero ingresado no esta dentro del rango permitido."<<endl;
   return 0;
}

   //Calcular factorial del numero
   for(int i=1; i<=num; i++){
    factorial*=1;
   }

cout<<"El factorial de: "<<num<<" es: "<< factorial<< endl;

   return 0;
}

#include <iostream>
using namespace std;
int main() {
int hh_inicial, mm_inicial, ss_inicial, hh_final, mm_final, ss_final;

cout << "Ingrese la hora inicial (formato hh:mm:ss): ";
scanf("%d:%d:%d", &hh_inicial, &mm_inicial, &ss_inicial);

if (hh_inicial < 0 || hh_inicial > 23 || mm_inicial < 0 || mm_inicial > 59 || ss_inicial < 0 || ss_inicial > 59) {
cout << "La hora inicial ingresada no es v�lida." << endl;
return 0;
    }

cout << "Ingrese la hora final (formato hh:mm:ss): ";
scanf("%d:%d:%d", &hh_final, &mm_final, &ss_final);

if (hh_final < 0 || hh_final > 23 || mm_final < 0 || mm_final > 59 || ss_final < 0 || ss_final > 59) {
cout << "La hora final ingresada no es v�lida." << endl;
return 0;
    }

for (;;) {

printf("%02d:%02d:%02d\n", hh_inicial, mm_inicial, ss_inicial);

if (hh_inicial == hh_final && mm_inicial == mm_final && ss_inicial == ss_final) {
cout << "�WAKE UP!" << endl;
break;
        }

ss_inicial++;
if (ss_inicial == 60) {
ss_inicial = 0;
mm_inicial++;
if (mm_inicial == 60) {
mm_inicial = 0;
hh_inicial++;
if (hh_inicial == 24) {
hh_inicial = 0;
                }
            }
        }
    }
return 0;
}

#include <iostream>

using namespace std;

int main() {
    int segundos, minutos, resto;

    cout << "Introduce la cantidad de segundos: ";
    cin >> segundos;

    minutos = segundos / 60;
    resto = segundos % 60;

    cout << segundos << " segundos son " << minutos << " minutos y " << resto << " segundos." << endl;

    return 0;
}

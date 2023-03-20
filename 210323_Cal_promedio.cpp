#include <iostream>

using namespace std;

int main() {
    float calif1, calif2, calif3, calif4, calif5, promedio;

    cout << "Introduce la calificacion de la materia 1: ";
    cin >> calif1;
    cout << "Introduce la calificacion de la materia 2: ";
    cin >> calif2;
    cout << "Introduce la calificacion de la materia 3: ";
    cin >> calif3;
    cout << "Introduce la calificacion de la materia 4: ";
    cin >> calif4;
    cout << "Introduce la calificacion de la materia 5: ";
    cin >> calif5;

    promedio = (calif1 + calif2 + calif3 + calif4 + calif5) / 5;

    if (promedio < 6) {
        cout << "Turismo no nos trataria asi" << endl;
    } else if (promedio < 8) {
        cout << "El proximo Gauss de Mexico" << endl;
    } else {
        cout << "Esto es lo tuyo, sigue esforzándote" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int numeros[TAM];
    int mayor, menor, suma = 0;

    cout << "Ingresa 10 numeros enteros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (i == 0) {
            mayor = menor = numeros[i];
        } else {
            if (numeros[i] > mayor) mayor = numeros[i];
            if (numeros[i] < menor) menor = numeros[i];
        }

        suma += numeros[i];
    }

    cout << "\nNumeros ingresados:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    double promedio = static_cast<double>(suma) / TAM;
    cout << "\nNumero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;
    cout << "Promedio: " << promedio << endl;

    cout << "\nNumeros en orden inverso:" << endl;
    for (int i = TAM - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

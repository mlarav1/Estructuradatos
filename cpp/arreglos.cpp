#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int numeros[10];

    srand(time(0));

    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100 + 1;
    }

    cout << "Arreglo inicial:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

   cout << "Recorrido con for:" << endl;

for (int i = 0; i < 10; i++) {
    cout << "Posicion " << i << " : " << numeros[i] << endl;
}

cout << "Recorrido con for-each:" << endl;

for (int numero : numeros) {
    cout << numero << endl;
}

cout << "Arreglo despues de cambiar los impares por cero:" << endl;

for (int i = 0; i < 10; i++) {
    if (numeros[i] % 2 != 0) {
        numeros[i] = 0;
    }
}

for (int i = 0; i < 10; i++) {
    cout << numeros[i] << " ";
}

cout << endl;


cout << "Valores multiplicados por su indice:" << endl;

for (int i = 0; i < 10; i++) {
    cout << numeros[i] * i << " ";
}

cout << endl;
         
         return 0;
}
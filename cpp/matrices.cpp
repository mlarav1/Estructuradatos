#include <iostream>

using namespace std;

int main() {

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matriz 3x3:" << endl;

    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {
            cout << matriz[fila][columna] << " ";
        }
        cout << endl;
    }

    cout << "Recorrido por columnas:" << endl;

for (int columna = 0; columna < 3; columna++) {
    for (int fila = 0; fila < 3; fila++) {
        cout << matriz[fila][columna] << " ";
    }
    cout << endl;
}

int suma = 0;

for (int fila = 0; fila < 3; fila++) {
    for (int columna = 0; columna < 3; columna++) {
        suma += matriz[fila][columna];
    }
}

cout << "Suma de todos los elementos: " << suma << endl;

cout << "Matriz después de intercambiar la primera fila con la última:" << endl;

for (int columna = 0; columna < 3; columna++) {
    int temporal = matriz[0][columna];
    matriz[0][columna] = matriz[2][columna];
    matriz[2][columna] = temporal;
}

for (int fila = 0; fila < 3; fila++) {
    for (int columna = 0; columna < 3; columna++) {
        cout << matriz[fila][columna] << " ";
    }
    cout << endl;
}

    return 0;
}
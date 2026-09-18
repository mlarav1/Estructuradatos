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

    return 0;
}
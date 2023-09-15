#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para imprimir un vector
void imprimirVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// Función para ordenar un vector usando el algoritmo de ordenación burbuja
void ordenarVector(vector<int>& vec) {
    int N = vec.size();
    bool intercambio;

    do {
        intercambio = false;

        for (int i = 0; i < N - 1; i++) {
            if (vec[i] > vec[i + 1]) {
                // Intercambia vec[i] y vec[i+1]
                swap(vec[i], vec[i + 1]);
                intercambio = true;
            }
        }
    } while (intercambio);
}

int main() {
    srand(time(0));

    int N;
    cout << "Ingrese la cantidad de elementos en el vector: ";
    cin >> N;

    vector<int> vec;

    // Generar N números aleatorios y agregarlos al vector
    for (int i = 0; i < N; i++) {
        int numeroAleatorio = rand() % 100; // Números aleatorios en el rango de 0 a 99
        vec.push_back(numeroAleatorio);
    }

    cout << "Vector original: ";
    imprimirVector(vec);

    ordenarVector(vec);

    cout << "Vector ordenado: ";
    imprimirVector(vec);

    return 0;
}


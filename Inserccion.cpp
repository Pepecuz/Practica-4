#include <iostream>
#include <cstdlib>
#include <ctime>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    std::cout << "Introduce la cantidad de números aleatorios que deseas generar y ordenar: ";
    std::cin >> n;

    srand(static_cast<unsigned>(time(0)));
    int arr[n];

    std::cout << "Números aleatorios generados: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generar números aleatorios en el rango de 0 a 99
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertionSort(arr, n);

    std::cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

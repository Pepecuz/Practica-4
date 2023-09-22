// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 10
// Problema planteado: metodo  QuickSort

#include <iostream>
#include <vector>

// Función para intercambiar dos elementos en un vector
void swap(std::vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Función para elegir el pivote y reorganizar el vector en torno al pivote
int partition(std::vector<int> &arr, int low, int high) {
    int pivot = arr[high]; // Elegimos el último elemento como pivote
    int i = low - 1; // Índice del elemento más pequeño

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr, i, j);
        }
    }

    swap(arr, i + 1, high);
    return (i + 1);
}

// Función de ordenamiento QuickSort
void quickSort(std::vector<int> &arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int N;
    std::cout << "Ingrese el tamaño del vector: ";
    std::cin >> N;

    std::vector<int> vec(N);

    std::cout << "Ingrese " << N << " elementos aleatorios:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cin >> vec[i];
    }

    quickSort(vec, 0, N - 1);

    std::cout << "Vector ordenado:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



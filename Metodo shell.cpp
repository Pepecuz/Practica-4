// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 10
// Problema planteado: metodo shell

#include <iostream>
#include <vector>

// Función para ordenar un vector utilizando el método de Shell
void shellSort(std::vector<int> &arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
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

    shellSort(vec);

    std::cout << "Vector ordenado:" << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

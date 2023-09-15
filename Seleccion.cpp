#include <iostream>
#include <cstdlib> //Libreria que genera numero aleatorios
#include <ctime>   //Libreria que genera una semilla

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int n;

    std::cout << "Introduce la cantidad de números aleatorios: ";
    std::cin >> n;


    srand(static_cast<unsigned>(time(0)));

    int arr[n];

    std::cout << "Números aleatorios generados: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selectionSort(arr, n);

    std::cout << "Arreglo: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

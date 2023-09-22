// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 11
// Problema planteado: Realice una función que enviándole dos numero calcule el máximo común divisor con el algoritmo de Euclides.
#include <iostream>

// Función para calcular el máximo común divisor (MCD) con el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    int mcd = calcularMCD(num1, num2);

    std::cout << "El máximo común divisor (MCD) de " << num1 << " y " << num2 << " es " << mcd << std::endl;

    return 0;
}

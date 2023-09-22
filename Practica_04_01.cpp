// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 1
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto
#include <iostream>

int main() {
    int year;

    // Pedir al usuario que ingrese un año
    std::cout << "Ingresa un año: ";
    std::cin >> year;

    // Verificar si el año es bisiesto
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " es un año bisiesto." << std::endl;
    } else {
        std::cout << year << " no es un año bisiesto." << std::endl;
    }

    return 0;
}

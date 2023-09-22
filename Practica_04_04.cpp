// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 4
// Problema planteado: Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango
//de 1 a 100, calcular y presentar la sumatoria y promedio de estas N calificaciones. La
//entrada de valores es para las calificaciones, debe hacerlo mediante una función.

#include <iostream>

// Función para ingresar N calificaciones y calcular sumatoria y promedio
void calcularSumatoriaYPromedio(int N, double &sumatoria, double &promedio) {
    sumatoria = 0.0;
    promedio = 0.0;

    for (int i = 0; i < N; i++) {
        double calificacion;
        do {
            std::cout << "Ingrese la calificación #" << (i + 1) << " (entre 1 y 100): ";
            std::cin >> calificacion;
        } while (calificacion < 1 || calificacion > 100); 
        sumatoria += calificacion;
    }

    promedio = sumatoria / N;
}

int main() {
    int N;
    double sumatoria, promedio;

    std::cout << "Ingrese la cantidad de calificaciones a procesar: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "La cantidad de calificaciones debe ser mayor que cero." << std::endl;
        return 1; 
    }

    calcularSumatoriaYPromedio(N, sumatoria, promedio);

    std::cout << "La sumatoria de las calificaciones es: " << sumatoria << std::endl;
    std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;

    return 0;
}


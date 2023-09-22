// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 7
// Problema planteado: Escribir un programa que lea el salario de un empleado y mediante una función
//efectué un incremento salarial en base a la siguiente escala:
//• Si el salario es menor < 1000 Bs. incremente en un 20%
//• Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en un 15%
//• Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en un 10%
//• Si el salario es mayor o igual a 6000 Bs. Incremente en un 5%
//La función debe obtener el incremento y el nuevo salario.
#include <iostream>

void calcularIncrementoSalarial(double &salario) {
    double incremento = 0.0;

    if (salario < 1000) {
        incremento = salario * 0.20;
    } else if (salario >= 1000 && salario < 3000) {
        incremento = salario * 0.15;
    } else if (salario >= 3000 && salario < 6000) {
        incremento = salario * 0.10;
    } else if (salario >= 6000) {
        incremento = salario * 0.05;
    }

    salario += incremento;
}

int main() {
    double salario;

    // Solicitar el salario del empleado
    std::cout << "Ingrese el salario del empleado (en Bs.): ";
    std::cin >> salario;

    // Calcular el incremento salarial
    calcularIncrementoSalarial(salario);

    // Mostrar el nuevo salario
    std::cout << "El nuevo salario es: " << salario << " Bs." << std::endl;

    return 0;
}

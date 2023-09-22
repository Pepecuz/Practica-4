// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 2
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad.
#include <iostream>
#include <ctime>

int main() {
    // Obtener la fecha actual
    std::time_t tiempoActual = std::time(nullptr);
    std::tm* fechaActual = std::localtime(&tiempoActual);

    // Solicitar la fecha de nacimiento al usuario
    int añoNacimiento, mesNacimiento, diaNacimiento;
    std::cout << "Ingresa tu fecha de nacimiento (año mes día): ";
    std::cin >> añoNacimiento >> mesNacimiento >> diaNacimiento;

    // Calcular la edad
    int edad = fechaActual->tm_year + 1900 - añoNacimiento;

    // Ajustar la edad si aún no ha cumplido años en este año
    if (mesNacimiento > fechaActual->tm_mon + 1 || (mesNacimiento == fechaActual->tm_mon + 1 && diaNacimiento > fechaActual->tm_mday)) {
        edad--;
    }

    // Mostrar la edad
    std::cout << "Tu edad es: " << edad << " años" << std::endl;

    return 0;
}

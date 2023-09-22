// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 6
// Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de
//estacionamiento de coches en un parqueo, teniendo en cuenta que la primera hora de
//estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor a una
//hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora
//siguiente.
#include <iostream>

// Función para calcular el costo de estacionamiento
double calcularCostoEstacionamiento(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida) {
    // Convertir el tiempo de entrada y salida a minutos
    int tiempoEntrada = horaEntrada * 60 + minutoEntrada;
    int tiempoSalida = horaSalida * 60 + minutoSalida;

    int duracion = tiempoSalida - tiempoEntrada;

    if (duracion < 60) {
        return 8.0;
    }


    int horasCompletas = (duracion - 60) / 60;
    double costoHorasCompletas = horasCompletas * 3.0;

    return 8.0 + costoHorasCompletas;
}

int main() {
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;

    // Caso 1
    horaEntrada = 9;
    minutoEntrada = 35;
    horaSalida = 10;
    minutoSalida = 15;
    double costo1 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    std::cout << "Caso 1 - Tiempo: 1 hora, Costo: " << costo1 << " Bs." << std::endl;

    // Caso 2
    horaEntrada = 11;
    minutoEntrada = 10;
    horaSalida = 12;
    minutoSalida = 20;
    double costo2 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    std::cout << "Caso 2 - Tiempo: 2 horas, Costo: " << costo2 << " Bs." << std::endl;

    // Caso 3
    horaEntrada = 17;
    minutoEntrada = 55;
    horaSalida = 21;
    minutoSalida = 30;
    double costo3 = calcularCostoEstacionamiento(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    std::cout << "Caso 3 - Tiempo: 4 horas, Costo: " << costo3 << " Bs." << std::endl;

    return 0;
}

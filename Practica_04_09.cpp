// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 9
// Problema planteado: A un trabajador se le paga según las horas que trabaja en la semana, una tarifa de
//pago por hora. Si la cantidad de horas trabajadas es mayor a 40, la tarifa se incrementa
//en un 50%. Calcular el salario total del trabajador, además considere que si existe un
//anticipo se debe restar este valor al salario total. Al total debe descontar un 10% para
//el pago de impuestos. Se debe obtener:
//- Total ganado
//- Total descuentos
//- Pago neto
#include <iostream>

int main() {
    double horasTrabajadas, tarifaPorHora, anticipo;
    
    std::cout << "Ingrese la cantidad de horas trabajadas: ";
    std::cin >> horasTrabajadas;
    
    std::cout << "Ingrese la tarifa por hora (en Bs.): ";
    std::cin >> tarifaPorHora;

    std::cout << "Ingrese el anticipo (en Bs.): ";
    std::cin >> anticipo;

    double salarioTotal;
    if (horasTrabajadas <= 40) {
        salarioTotal = horasTrabajadas * tarifaPorHora;
    } else {
        double horasExtra = horasTrabajadas - 40;
        salarioTotal = (40 * tarifaPorHora) + (horasExtra * tarifaPorHora * 1.5);
    }

    // Calcular los descuentos
    double impuestos = salarioTotal * 0.10;
    double totalDescuentos = anticipo + impuestos;

    // Calcular el pago neto
    double pagoNeto = salarioTotal - totalDescuentos;

    // Mostrar los resultados
    std::cout << "Total ganado: " << salarioTotal << " Bs." << std::endl;
    std::cout << "Total descuentos: " << totalDescuentos << " Bs." << std::endl;
    std::cout << "Pago neto: " << pagoNeto << " Bs." << std::endl;

    return 0;
}

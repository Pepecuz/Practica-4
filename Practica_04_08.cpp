// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 8
// Problema planteado: En una fábrica de computadoras se planea ofrecer a los clientes un descuento que
//dependerá del número de computadoras que compre. Si las computadoras son menos de
//cinco se les dará un 10% de descuento sobre el total de la compra; si el número de
//computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de
//descuento; y si son 10 o más se les da un 40% de descuento. El precio de cada
//computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el
//precio total que el cliente debe pagar y el valor del descuento.
#include <iostream>

int main() {
    int numComputadoras;
    double precioPorComputadora;
    
    // Solicitar al usuario el número de computadoras
    std::cout << "Ingrese el número de computadoras: ";
    std::cin >> numComputadoras;
    
    std::cout << "Ingrese el precio por computadora (en Bs.): ";
    std::cin >> precioPorComputadora;
    
    double precioTotal = numComputadoras * precioPorComputadora;
    double descuento = 0.0;

    if (numComputadoras < 5) {
        descuento = precioTotal * 0.10;
    } else if (numComputadoras >= 5 && numComputadoras < 10) {
        descuento = precioTotal * 0.20;
    } else {
        descuento = precioTotal * 0.40;
    }

    double precioConDescuento = precioTotal - descuento;

    std::cout << "Precio total: " << precioTotal << " Bs." << std::endl;
    std::cout << "Descuento: " << descuento << " Bs." << std::endl;
    std::cout << "Precio con descuento: " << precioConDescuento << " Bs." << std::endl;

    return 0;
}

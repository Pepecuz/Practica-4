// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 3
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, posteriormente
//indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el
//de los pesos. (realizar con estructuras)
#include <iostream>
#include <string>

// Definición de la estructura para almacenar los datos de una persona
struct Persona {
    std::string nombre;
    int edad;
    double estatura;
    double peso;
};

int main() {
    // Declarar un arreglo de personas para almacenar los datos de las 12 personas
    Persona personas[12];

    // Leer los datos de las 12 personas
    for (int i = 0; i < 12; i++) {
        std::cout << "Persona " << i + 1 << ":" << std::endl;
        std::cout << "Nombre: ";
        std::cin >> personas[i].nombre;
        std::cout << "Edad: ";
        std::cin >> personas[i].edad;
        std::cout << "Estatura (en metros): ";
        std::cin >> personas[i].estatura;
        std::cout << "Peso (en kilogramos): ";
        std::cin >> personas[i].peso;
        std::cout << std::endl;
    }

    // Encontrar la persona de menor edad
    int menorEdad = personas[0].edad;
    std::string nombreMenorEdad = personas[0].nombre;

    for (int i = 1; i < 12; i++) {
        if (personas[i].edad < menorEdad) {
            menorEdad = personas[i].edad;
            nombreMenorEdad = personas[i].nombre;
        }
    }

    // Calcular el promedio de estaturas y pesos
    double sumaEstaturas = 0.0;
    double sumaPesos = 0.0;

    for (int i = 0; i < 12; i++) {
        sumaEstaturas += personas[i].estatura;
        sumaPesos += personas[i].peso;
    }

    double promedioEstaturas = sumaEstaturas / 12;
    double promedioPesos = sumaPesos / 12;

    // Mostrar los resultados
    std::cout << "La persona de menor edad es: " << nombreMenorEdad << " con " << menorEdad << " años." << std::endl;
    std::cout << "El promedio de estaturas es: " << promedioEstaturas << " metros." << std::endl;
    std::cout << "El promedio de pesos es: " << promedioPesos << " kilogramos." << std::endl;

    return 0;
}

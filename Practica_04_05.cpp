// Materia: Programación I, Paralelo 1
// Autor: Jose Maria Cruz Llanos
// Fecha creación: 14/08/2023
// Fecha modificación: 15/08/2023
// Número de ejericio: 5
// Problema planteado: Elabore un programa para registro académico de la UCB, que solicite el nombre de una
//materia, el paralelo, el docente y sus correspondientes notas de periodo. Al final, se
//muestra la nota final y si aprobó o reprobo el curso. (realizar con estructuras)
#include <iostream>
#include <string>

struct Materia {
    std::string nombre;
    std::string paralelo;
    std::string docente;
    double nota1;
    double nota2;
    double nota3;
};

bool calcularNotaFinal(Materia &materia) {
    materia.notaFinal = (materia.nota1 + materia.nota2 + materia.nota3) / 3.0;

    materia.aprobado = materia.notaFinal >= 60.0;

    return materia.aprobado;
}

int main() {
    Materia materia;

    // Solicitar información de la materia
    std::cout << "Nombre de la materia: ";
    std::cin >> materia.nombre;

    std::cout << "Paralelo: ";
    std::cin >> materia.paralelo;

    std::cout << "Nombre del docente: ";
    std::cin.ignore(); // Limpiar el buffer del teclado
    std::getline(std::cin, materia.docente);

    std::cout << "Nota del periodo 1: ";
    std::cin >> materia.nota1;

    std::cout << "Nota del periodo 2: ";
    std::cin >> materia.nota2;

    std::cout << "Nota del periodo 3: ";
    std::cin >> materia.nota3;

    // Calcular la nota final y determinar si se aprobó
    bool aprobado = calcularNotaFinal(materia);

    // Mostrar la nota final y el resultado
    std::cout << "Nota final: " << materia.notaFinal << std::endl;
    if (aprobado) {
        std::cout << "Aprobado" << std::endl;
    } else {
        std::cout << "Reprobado" << std::endl;
    }

    return 0;
}

#include <iostream>
#include <array>
using ldf = double(double, double);

std::array<ldf*, 4> ops = {
    [](double a, double b) { return a + b; },
    [](double a, double b) { return a - b; },
    [](double a, double b) { return a * b; },
    [](double a, double b) { return a / b; }
};

int main()
{
    std::cout << "Calculadora de operaciones basicas   \n"
              << " 1 Suma           (a + b)            \n"
              << " 2 Resta          (a - b)            \n"
              << " 3 Multiplicación (a * b)            \n"
              << " 4 División       (a / b)            \n";

    int operation;
    std::cout << "> Seleccione la operación a realizar (1/4): ";
    std::cin >> operation;

    double a;
    std::cout << "? Valor de a: ";
    std::cin >> a;

    double b;
    std::cout << "? Valor de b: ";
    std::cin >> b;

    std::cout << "El resultado de la operación es: "
              << ops[operation - 1](a, b)
              << '\n';
}

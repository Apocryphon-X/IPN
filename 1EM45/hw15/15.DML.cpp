#include <iostream>

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

    double a, b;
    std::cout << "> Ingrese dos valores (a b): ";
    std::cin >> a >> b;

    double result = 0.0;
    switch(operation)
    {
        case 1: result = a + b; break;
        case 2: result = a - b; break;
        case 3: result = a * b; break;
        case 4: result = a / b; break;
    }

    std::cout << "El resultado de la operación es: "
              << result << '\n';
    return 0;
}

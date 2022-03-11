#include <iostream>
#include <cmath>
int main()
{
    double a;
    std::cout << "Validación matematica para: (a * b)((8 * (9 + 3) / 6))\n"
              << "> Ingrese el valor de a: ";
    std::cin >> a;

    double b;
    std::cout << "> Ingrese el valor de b: ";
    std::cin >> b;

    double answer;
    std::cout << "> Ingrese el resultado que usted obtuvo: ";
    std::cin >> answer;

    double result = (a * b) * (8.0 * (9.0 + 3.0) / 6.0);

    std:: cout << "Su resultado es ";
    if (std::fabs(result - answer) < 1e-9)
        std::cout << "correcto!\n";
    else
    {
        std::cout << "incorrecto.\n";
        std::cout << "El resultado correcto era: " << result;
        std::cout << '\n';
    }
    return 0;
}

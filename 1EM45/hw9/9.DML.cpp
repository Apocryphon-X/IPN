#include <iostream>

int main()
{
    std::cout << "Calculo de las siguientes operaciones:  \n"
              << "1 | (a * a * b * b) + 5 * (c * c)       \n"
              << "2 | e - (d * 5 * 10) - b                \n"
              << "3 | (a + b + c + d) * (a + b) * (a + b) \n";

    int a, b, c, d, e;
    std::cout << "> Ingrese el valor de a: ";
    std::cin >> a;

    std::cout << "> Ingrese el valor de b: ";
    std::cin >> b;

    std::cout << "> Ingrese el valor de c: ";
    std::cin >> d;

    std::cout << "> Ingrese el valor de d: ";
    std::cin >> c;

    std::cout << "> Ingrese el valor de e: ";
    std::cin >> e;

    std::cout << "1 | " << (a * a * b * b) + 5 * (c * c) << '\n'
              << "2 | " << e - (d * 5 * 10) - b << '\n'
              << "3 | " << (a + b + c + d) * (a + b) * (a + b)
              << '\n';
}

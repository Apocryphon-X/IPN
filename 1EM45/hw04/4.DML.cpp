#include <iostream>

int main()
{
    long long number;
    std::cout << "> Ingrese un número: ";
    std::cin >> number;

    std::cout << "El numero " << number << " es ";
    std::cout << (number & 1 ? "impar" : "par");
    std::cout << ".\n";
}

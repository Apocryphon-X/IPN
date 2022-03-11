#include <iostream>

int main()
{
    int number;
    std::cout << "> Ingrese un número: ";
    std::cin >> number;

    std::cout << "El numero " << number << " es "
              << (number < 10 ? "menor" : "mayor")
              << " que 10.";

    return 0;
}

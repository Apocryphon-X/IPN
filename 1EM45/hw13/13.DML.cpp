#include <iostream>

int minVal(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int a, b, c;
    std::cout << "> Ingrese tres numeros separados por espacios (a b c): ";
    std::cin >> a >> b >> c;

    // This is better with std::min({a, b, c})
    std::cout << "El menor de esos tres numeros, es: ";
    std::cout << minVal(minVal(a, b), c) << '\n';
    return 0;
}

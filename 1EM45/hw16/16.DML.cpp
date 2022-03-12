#include <iostream>
#include <iomanip>

int main()
{
    double price;
    std::cout << "> Ingrese el precio del articulo: ";
    std::cin >> price;

    int quantity;
    std::cout << "> Ingrese la cantidad de articulos: ";
    std::cin >> quantity;

    int discount = 0;

    if (quantity <= 12) discount = 5;
    else if (quantity <= 20) discount = 10;
    else if (quantity <= 49) discount = 20;
    else if (quantity <= 99) discount = 35;
    else discount = 45;

    std::cout << "> El descuento que se aplicara es de: %"
              << discount << '\n';

    double total = quantity * price;
    double minus = 0.0;
    switch(discount)
    {
        case 5:  minus = (total * (1.0 / 5.0));  break;
        case 10: minus = (total * (1.0 / 10.0)); break;
        case 20: minus = (total * (1.0 / 20.0)); break;
        case 35: minus = (total * (1.0 / 35.0)); break;
        default: minus = (total * (1.0 / 45.0)); break;
    }

    std::cout << "Valor descontado: $"
              << minus << '\n';

    std::cout << "Precio final: $" << std::fixed
              << total - minus
              << '\n';
    return 0;
}

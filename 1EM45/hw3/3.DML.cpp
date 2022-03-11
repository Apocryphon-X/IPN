#include <iostream>
#include <string>

int main()
{
    std::string username;

    std::cout << "> Ingrese su nombre: ";
    std::getline(std::cin, username);

    std::cout << "Hola, " << username << "!\n";
    return 0;
}

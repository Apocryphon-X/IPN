#include <iostream>
#include <ctime>

int actual_year()
{
    std::time_t tmp = std::time(nullptr);
    std::tm *const now = std::localtime(&tmp);
    return (now -> tm_year) + 1900;
}


int main()
{
    int year_of_birth;
    std::cout << "> Ingrese su año de nacimiento: ";
    std::cin >> year_of_birth;

    // TODO: Add month and day check for age calculation
    std::cout << "Probablemente, su edad actual es: ";
    std::cout << actual_year() - year_of_birth;
    std::cout << '\n';
    return 0;
}

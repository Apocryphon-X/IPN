#include <iostream>

int main()
{
    int score;
    std::cout << "> Ingrese la calificación: ";
    std::cin >> score;
    std::cout << "La calificación es "
              << (score < 6 ? "REPROBATORIA" : "APROBATORIA")
              << '\n';
    return 0;
}

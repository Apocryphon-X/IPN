#include <iostream>
#include <utility>
#include <string>

int main()
{
    std::pair<char, std::string> values[5] = {
        {'A', "Excelente          "},
        {'B', "Buena              "},
        {'C', "Suficiente         "},
        {'D', "Apenas aprobatoria "},
        {'E', "Reprobatoria       "},
    };

    char note;
    std::cout << "> Ingrese la nota que obtuvo: ";
    std::cin >> note;

    for(const auto &[letter, msg] : values)
    {
        if (note == letter)
        {
            std::cout << "Tu calificación es: " << msg << '\n';
            return 0;
        }
    }

    std::cout << "Calificacion desconocida!\n";
    return 0;
}

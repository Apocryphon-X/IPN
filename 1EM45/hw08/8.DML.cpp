/**
 *   Name: Dante Mendoza Leyva (1EM45)
 *   Date:  02 / February / 2022
 *
 *   References:
 *   - https://en.wikipedia.org/wiki/ANSI_escape_code
 *   - https://stackoverflow.com/a/33206814
 *   - https://stackoverflow.com/a/39675059
 *   - https://bugs.python.org/issue30075
 *   - https://bugs.python.org/msg291732
**/

#include "../include/t-manip.hpp"
#include <cstdlib>
#include <iostream>
#include <string>


int main()
{
    using t_fmt::truecolor::rgb;
    using t_fmt::reset;

    std::system(""); // Hack to enable VT Mode on Windows CMD via 'cmd.exe /c ...'

    int tabla;
    std::cout << "> Ingrese la tabla de multiplicar que desea calcular: ";
    std::cin >> tabla;
    std::cin.ignore();

    for(int c = 1 ; c <= 10; c++)
    {
        std::cout << tabla << " * " << c << "\t= ";
        int resultado = tabla * c;

        std::cout << rgb(0, 150 + (c * 10), 150 + (c * 10)) << resultado
                  << reset << '\n';
    }

    std::cout << "Press ENTER to continue.";
    std::cin.get();
    return 0;
}

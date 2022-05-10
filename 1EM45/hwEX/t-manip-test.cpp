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

#include "../../include/t-manip.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

namespace tc = t_fmt::truecolor;

int main()
{
    system(""); // Hack to partially enable VT Mode on Windows CMD via 'cmd.exe /c ...'

    cout << t_fmt::bold;
    cout << tc::rgb(66, 133, 244) << 'G';
    cout << tc::rgb(234, 67, 53)  << 'o';
    cout << tc::rgb(251, 188, 5)  << 'o';
    cout << tc::rgb(66, 133, 244) << 'g';
    cout << tc::rgb(52, 168, 83)  << 'l';
    cout << tc::rgb(234, 67, 53)  << 'e';
    cout << t_fmt::reset << '\n';

    cout << "Press ENTER to continue.";
    cin.get();
    return 0;
}

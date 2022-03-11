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

#include "../../include/easy_colors_1.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system(""); // Hack to enable VT Mode on Windows CMD via 'cmd.exe /c ...'

    cout << COLOR.FG_RGB(66, 133, 244) << 'G';
    cout << COLOR.FG_RGB(234, 67, 53)  << 'o';
    cout << COLOR.FG_RGB(251, 188, 5)  << 'o';
    cout << COLOR.FG_RGB(66, 133, 244) << 'g';
    cout << COLOR.FG_RGB(52, 168, 83)  << 'l';
    cout << COLOR.FG_RGB(234, 67, 53)  << 'e';
    cout << COLOR.NORMAL << '\n';

    cout << "Press ENTER to continue.";
    cin.get();
    return 0;
}

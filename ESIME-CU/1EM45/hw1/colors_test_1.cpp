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

#include "easy_colors_1.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system(""); // Hack to enable VT Mode on Windows CMD via 'cmd.exe /c ...'

    cout << "* Standard background colors test:         [";

    cout << COLOR.BG_BLACK   << ' ';
    cout << COLOR.BG_RED     << ' ';
    cout << COLOR.BG_GREEN   << ' ';
    cout << COLOR.BG_YELLOW  << ' ';
    cout << COLOR.BG_BLUE    << ' ';
    cout << COLOR.BG_MAGENTA << ' ';
    cout << COLOR.BG_CYAN    << ' ';
    cout << COLOR.BG_WHITE   << ' ';
    cout << COLOR.NORMAL << "]\n";

    cout << "* Standard background bright colors test:  [";

    cout << COLOR.BG_B_BLACK   << ' ';
    cout << COLOR.BG_B_RED     << ' ';
    cout << COLOR.BG_B_GREEN   << ' ';
    cout << COLOR.BG_B_YELLOW  << ' ';
    cout << COLOR.BG_B_BLUE    << ' ';
    cout << COLOR.BG_B_MAGENTA << ' ';
    cout << COLOR.BG_B_CYAN    << ' ';
    cout << COLOR.BG_B_WHITE   << ' ';
    cout << COLOR.NORMAL << "]\n\n";

    cout << "* Standard foreground colors test:         [";

    cout << COLOR.FG_BLACK   << 'a';
    cout << COLOR.FG_RED     << 'b';
    cout << COLOR.FG_GREEN   << 'c';
    cout << COLOR.FG_YELLOW  << 'd';
    cout << COLOR.FG_BLUE    << 'e';
    cout << COLOR.FG_MAGENTA << 'f';
    cout << COLOR.FG_CYAN    << 'g';
    cout << COLOR.FG_WHITE   << 'h';
    cout << COLOR.NORMAL << "]\n";

    cout << "* Standard foreground bright colors test:  [";

    cout << COLOR.FG_B_BLACK   << 'a';
    cout << COLOR.FG_B_RED     << 'b';
    cout << COLOR.FG_B_GREEN   << 'c';
    cout << COLOR.FG_B_YELLOW  << 'd';
    cout << COLOR.FG_B_BLUE    << 'e';
    cout << COLOR.FG_B_MAGENTA << 'f';
    cout << COLOR.FG_B_CYAN    << 'g';
    cout << COLOR.FG_B_WHITE   << 'h';
    cout << COLOR.NORMAL << "]\n\n";

    cout << "* RGB foreground colors test:              [ ";

    cout << COLOR.FG_RGB(66, 133, 244) << 'G';
    cout << COLOR.FG_RGB(234, 67, 53)  << 'o';
    cout << COLOR.FG_RGB(251, 188, 5)  << 'o';
    cout << COLOR.FG_RGB(66, 133, 244) << 'g';
    cout << COLOR.FG_RGB(52, 168, 83)  << 'l';
    cout << COLOR.FG_RGB(234, 67, 53)  << 'e';
    cout << COLOR.NORMAL << " ]\n";

    cout << "* RGB background colors test:              [ ";
    cout << COLOR.FG_RGB(255, 255, 255);

    cout << COLOR.BG_RGB(66, 133, 244) << 'G';
    cout << COLOR.BG_RGB(234, 67, 53)  << 'o';
    cout << COLOR.BG_RGB(251, 188, 5)  << 'o';
    cout << COLOR.BG_RGB(66, 133, 244) << 'g';
    cout << COLOR.BG_RGB(52, 168, 83)  << 'l';
    cout << COLOR.BG_RGB(234, 67, 53)  << 'e';

    cout << COLOR.NORMAL;
    cout << " ]\n";
}

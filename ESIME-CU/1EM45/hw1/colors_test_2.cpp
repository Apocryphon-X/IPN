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

#include "easy_colors_2.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    system(""); // Hack to enable VT Mode on Windows CMD via 'cmd.exe /c ...'

    cout << "* Standard background colors test:         [";

    cout << easy_colors::bg_black   << ' ';
    cout << easy_colors::bg_red     << ' ';
    cout << easy_colors::bg_green   << ' ';
    cout << easy_colors::bg_yellow  << ' ';
    cout << easy_colors::bg_blue    << ' ';
    cout << easy_colors::bg_magenta << ' ';
    cout << easy_colors::bg_cyan    << ' ';
    cout << easy_colors::bg_white   << ' ';
    cout << easy_colors::normal << "]\n";

    cout << "* Standard background bright colors test:  [";

    cout << easy_colors::bg_b_black   << ' ';
    cout << easy_colors::bg_b_red     << ' ';
    cout << easy_colors::bg_b_green   << ' ';
    cout << easy_colors::bg_b_yellow  << ' ';
    cout << easy_colors::bg_b_blue    << ' ';
    cout << easy_colors::bg_b_magenta << ' ';
    cout << easy_colors::bg_b_cyan    << ' ';
    cout << easy_colors::bg_b_white   << ' ';
    cout << easy_colors::normal << "]\n\n";

    cout << "* Standard foreground colors test:         [";

    cout << easy_colors::fg_black   << 'a';
    cout << easy_colors::fg_red     << 'b';
    cout << easy_colors::fg_green   << 'c';
    cout << easy_colors::fg_yellow  << 'd';
    cout << easy_colors::fg_blue    << 'e';
    cout << easy_colors::fg_magenta << 'f';
    cout << easy_colors::fg_cyan    << 'g';
    cout << easy_colors::fg_white   << 'h';
    cout << easy_colors::normal << "]\n";

    cout << "* Standard foreground bright colors test:  [";

    cout << easy_colors::fg_b_black   << 'a';
    cout << easy_colors::fg_b_red     << 'b';
    cout << easy_colors::fg_b_green   << 'c';
    cout << easy_colors::fg_b_yellow  << 'd';
    cout << easy_colors::fg_b_blue    << 'e';
    cout << easy_colors::fg_b_magenta << 'f';
    cout << easy_colors::fg_b_cyan    << 'g';
    cout << easy_colors::fg_b_white   << 'h';
    cout << easy_colors::normal << "]\n\n";

    cout << "* RGB foreground colors test:              [ ";

    cout << easy_colors::fg_rgb(66, 133, 244) << 'G';
    cout << easy_colors::fg_rgb(234, 67, 53)  << 'o';
    cout << easy_colors::fg_rgb(251, 188, 5)  << 'o';
    cout << easy_colors::fg_rgb(66, 133, 244) << 'g';
    cout << easy_colors::fg_rgb(52, 168, 83)  << 'l';
    cout << easy_colors::fg_rgb(234, 67, 53)  << 'e';
    cout << easy_colors::normal << " ]\n";

    cout << "* RGB background colors test:              [ ";
    cout << easy_colors::fg_rgb(255, 255, 255);

    cout << easy_colors::bg_rgb(66, 133, 244) << 'G';
    cout << easy_colors::bg_rgb(234, 67, 53)  << 'o';
    cout << easy_colors::bg_rgb(251, 188, 5)  << 'o';
    cout << easy_colors::bg_rgb(66, 133, 244) << 'g';
    cout << easy_colors::bg_rgb(52, 168, 83)  << 'l';
    cout << easy_colors::bg_rgb(234, 67, 53)  << 'e';
    cout << easy_colors::normal;
    cout << " ]\n";
}

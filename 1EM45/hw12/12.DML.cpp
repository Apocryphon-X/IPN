#include <array>
#include <iostream>
#include <utility>

#define show(logic, name)                                      \
    std::cout << #name << '\n';                                \
    for (const auto &[x, y] : values)                          \
        std::cout << x << " " << (#logic) << " " << y << " = " \
                  << (x logic y) << '\n';

int main()
{
    std::pair<bool, bool> values[4] = {
        {1, 1},
        {0, 0},
        {1, 0},
        {0, 1},
    };

    show(or, OR);
    show(and, AND);
    show(xor, XOR);

    std::cout << "NAND\n";
    for (const auto &[x, y] : values)
        std::cout << x << " nand " << y << " = "
                  << !(x and y) << '\n';

    std::cout << "NOR\n";
    for (const auto &[x, y] : values)
        std::cout << x << " nor " << y << " = "
                  << !(x or y) << '\n';
    return 0;
}

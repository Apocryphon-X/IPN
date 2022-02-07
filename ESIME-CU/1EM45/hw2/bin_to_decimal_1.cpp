/**
 *   Name: Dante Mendoza Leyva (1EM45)
 *   Date:  06 / February / 2022
**/

#include <iostream>
using namespace std;
using i64 = long long;

i64 Number;

int main()
{
    cout << "(Decimal -> Binary) Number to convert: ";
    cin >> Number;

    cout << "(Conversion result) ";
    for (int c = 63; c >= 0; c--)
    {
        cout << !!(Number & (1LL << c));
        if (c % 8 == 0)
            cout << ' ';
    }

    cout << endl;
    cout << "Press ENTER to continue.";
    cin.get();
    return 0;
}

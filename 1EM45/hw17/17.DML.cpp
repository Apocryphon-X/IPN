#include <iostream>
#include <set>
#include <chrono>
#include <thread>
#include <map>
using namespace std;

#define delay(x) this_thread::sleep_for(chrono::milliseconds(x))

#if defined(_WIN32) || defined(_WIN64)
    #define CLEAR "cls"
#elif defined(__linux__) || defined(__unix__) || defined(_POSIX_VERSION)
    #define CLEAR "clear"
#endif

const unsigned full_mask = 0x3ff;

unsigned sintomas[] = {
    0b0000000001, // 0 Dolor de cabeza
    0b0000000010, // 1 Dolor de garganta
    0b0000000100, // 2 Mareos
    0b0000001000, // 3 Fiebre
    0b0000010010, // 4 Estornudos
    0b0000100000, // 5 Moqueo
    0b0001000000, // 6 Ronquera
    0b0010000000, // 7 Enrojecimiento
    0b0100000000, // 8 Tos
    0b1000000000, // 9 Congestion nasal
};

string nombres[] = {
    "Dolor de cabeza",
    "Dolor de garganta",
    "Mareos",
    "Fiebre",
    "Estornudos",
    "Moqueo",
    "Ronquera",
    "Enrojecimiento",
    "Tos",
    "Congestion nasal",
};

map <unsigned, string> db = {
    {sintomas[0] | sintomas[9] | sintomas[5], "Sinusitis"},
    {sintomas[8] | sintomas[5], "Bronquitis aguda"},
    {sintomas[3] | sintomas[8] | sintomas[1] | sintomas[5], "Influenza"},
    {sintomas[4] | sintomas[5] | sintomas[9], "Resfriado comun"},
    {sintomas[9] | sintomas[4] | sintomas[5] | sintomas[8], "Rinitis no alergica"},
    {sintomas[6] | sintomas[3] | sintomas[8], "Infeccion respiratoria alta"},
    {sintomas[0] | sintomas[1], "Faringitis"},
    {sintomas[6] | sintomas[3], "Laringitis"},
    {sintomas[7] | sintomas[8], "Gripe"},
    {sintomas[9] | sintomas[7] | sintomas[8], "Alergia"},
    {sintomas[3] | sintomas[9] | sintomas[0] | sintomas[1] | sintomas[5] | sintomas[8], "COVID-19"}
};

void clear_screen() { system(CLEAR); }
void draw_menu(set<string> &mis_sintomas, unsigned bitmask = 0)
{
    cout << " 1  | Dolor de cabeza   " << endl
         << " 2  | Dolor de garganta " << endl
         << " 3  | Mareos            " << endl
         << " 4  | Fiebre            " << endl
         << " 5  | Estornudos        " << endl
         << " 6  | Moqueo            " << endl
         << " 7  | Ronquera          " << endl
         << " 8  | Enrojecimiento    " << endl
         << " 9  | Tos               " << endl
         << " 10 | Congestion nasal  " << endl
         << endl;

    if (!mis_sintomas.empty())
    {
        cout << "Actalmente tengo: [";

        unsigned actual_idx = 0;
        for(string sintoma: mis_sintomas)
        {
            cout << sintoma;
            if (actual_idx < mis_sintomas.size() - 1)
                cout << ", ";
            actual_idx++;
        }

        cout << ']' << endl << endl;
    }
    cout << "Bitmask:" << bitmask << endl;
}

void add(set<string> &mis_sintomas, unsigned &mask)
{
    clear_screen();
    draw_menu(mis_sintomas, mask);

    unsigned sintoma;
    cout << "> Ingrese su sintoma: ";
    cin >> sintoma;

    mis_sintomas.insert(nombres[sintoma - 1]);
    mask |= sintomas[sintoma - 1];
}

void remove(set <string> &mis_sintomas, unsigned &mask)
{
    clear_screen();
    draw_menu(mis_sintomas, mask);

    unsigned sintoma;
    cout << "> Ingrese que sintoma desea eliminar: ";
    cin >> sintoma;

    mis_sintomas.erase(nombres[sintoma - 1]);
    mask &= ~(sintomas[sintoma - 1]);
}

int main()
{
    for(char i: "Consultorio Medico Inteligente")
    {
        cout << i, cout.flush();
        delay(35);
    }

    delay(500);
    cout << endl;

    cout << "- Se le presentara una lista de sintomas." << endl;
    cout << "- Seleccione todos los que presente:" << endl;
    cout << endl;

    set <string> listado;
    unsigned bit_mask = 0x0;
    char option = '\0';

    draw_menu(listado);

    do
    {
        switch(option)
        {
        case 'a':
            add(listado, bit_mask);
            clear_screen();
            draw_menu(listado, bit_mask);
            break;
        case 'b':
            remove(listado, bit_mask);
            clear_screen();
            draw_menu(listado, bit_mask);
            break;
        case 'c':
            clear_screen();
            continue;
        }

        cout << " a) Agregar sintoma  " << endl
             << " b) Eliminar sintoma " << endl
             << " c) Evaluar" << endl;

        cout << " > ";
        cin >> option;

    } while(option != 'c');

    auto it = db.find(bit_mask);

    cout << "Resultados\n";
    if (it != db.end())
        cout << "Usted podria padecer: "
             << it -> second;
    else
        cout << "Contacte a un especialista.";
    cout << endl;
    return 0;
}

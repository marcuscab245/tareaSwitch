#include <iostream>

using namespace std;

int main()
{
    char l;

    cout << "Ingrese una letra para determinar su color.\nLas letras disponibles son: R, Y, B, W, K, C, G. \n";
    cin >> l;
    switch (l)
    {
    case 'r':
        cout << "Su color es Rojo. \n";
        break;
    case 'y':
        cout << "Su color es Amarillo. \n";
        break;
    case 'b':
        cout << "Su color es Azul. \n";
        break;
    case 'w':
        cout << "Su color es Blanco. \n";
        break;
    case 'k':
        cout << "Su color Negro. \n";
        break;
    case 'c':
        cout << "Su color es Cyan. \n";
        break;
    case 'g':
        cout << "Su color es Verde. \n";
        break;
    default:
        cout << "Dato invalido. \n";
    }
    return 0;
}

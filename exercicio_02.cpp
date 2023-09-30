#include <iostream>
#include <iomanip> // Para manipulação de formato

using namespace std;

int main() {
    
    // a.
    cout << "a. Caracteres numéricos e seu correspondente código numérico." << endl;
    cout << " " << endl;

    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c) << endl;
    }

    cout << " " << endl;

    // b.
    cout << "b. Código numérico em octal e em hexadecimal." << endl;
    cout << " " << endl;
    
    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c)
                  << " (Octal: " << oct << static_cast<int>(c)
                  << ", Hexadecimal: " << hex << static_cast<int>(c) << ")" << dec << endl;
    }

    cout << " " << endl;

    // c.
    cout << "c. Valor qualquer." << endl;
    cout << "d. Caratere especial." << endl;
    cout << " " << endl;

    char valor;
    cout << "Digite um valor: ";
    cin >> valor;
    cout << "'" << valor << "' - " << static_cast<int>(valor)
              << " (Octal: " << oct << static_cast<int>(valor)
              << ", Hexadecimal: " << hex << static_cast<int>(valor) << ")" << dec << endl;

    // d.
    string caractereEspeciais = u8"ç , ã"; // Usando string para armazenar os caracteres especiais

    for (char caratereEspecial : caractereEspeciais) {
        cout << "'" << caratereEspecial << "' - " << static_cast<int>(static_cast<unsigned char>(caratereEspecial))
                   << " (Octal: " << oct << static_cast<int>(static_cast<unsigned char>(caratereEspecial))
                   << ", Hexadecimal: " << hex << static_cast<int>(static_cast<unsigned char>(caratereEspecial)) << ")" << dec << endl;
    }

    return 0;
}

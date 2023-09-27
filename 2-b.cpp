#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numeros = "0123456789";

    cout << "Char para DECIMAL:" << endl;
    for(int i =0; i < 10; i++) {
            cout << "\'" <<numeros[i] << "\'" << " - " << int(numeros[i]) << endl;

    }
    cout << "-----------------------" << endl;
    cout << "Char para Hexadecimal:" << endl;
    for(int i =0; i < 10; i++) {
            cout << hex << "\'" <<numeros[i] << "\'" << " - " << int(numeros[i]) << endl;

    }
    cout << "-----------------------" << endl;
    cout << "Char para Octal:" << endl;
    for(int i =0; i < 10; i++) {
            cout << oct << "\'" << numeros[i] << "\'" << " - " << 0 <<  int(numeros[i]) << endl;

    }

    return 0;
}


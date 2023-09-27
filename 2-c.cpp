#include <iostream>
#include <string>
using namespace std;

int main()
{
    char numeros;
    bool sair = true;
    string inputContinuar;

    while(sair) {
        cout << "Digite um valor: ";
        cin >> numeros;
        cout << " " << endl;
        cout << "Char para DECIMAL:" << endl;
        cout << "\'" <<numeros << "\'" << " - " << int(numeros) << endl;

        
        cout << "-----------------------" << endl;
        cout << "Char para Hexadecimal:" << endl;
        cout << hex << "\'" <<numeros << "\'" << " - " << int(numeros) << endl;

        
        cout << "-----------------------" << endl;
        cout << "Char para Octal:" << endl;
        cout << oct << "\'" << numeros << "\'" << " - " << int(numeros) << endl;

        cout << "Sair(s/n): ";
        getline(cin >> ws, inputContinuar);
        sair = inputContinuar == "s" ? false : true;
    }
    

    return 0;
}


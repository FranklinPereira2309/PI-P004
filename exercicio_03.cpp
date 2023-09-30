#include <iostream>
#include <limits.h>

using namespace std;


int main() {
    int menor_valor = INT_MIN;
    int maior_valor = INT_MAX;
    
    cout << "Menor valor representável por int: " << menor_valor << endl;
    cout << "Maior valor representável por int: " << maior_valor << endl;
    cout << " " << endl;

    unsigned long int uli = ULONG_MAX;
    cout << "Maior valor representável por unsigned long int: " << uli << endl;

    long int li = LONG_MAX;
    cout << "Maior valor representável por long int: " << li << endl;

    cout << " " << endl;

    unsigned int ui = UINT_MAX;
    long int _li = ui;

    cout << "Valor de ui: " << ui << endl;
    cout << "Valor de li após atribuição de ui: " << li << endl;

    unsigned int _ui = UINT_MAX;
    cout << "Maior valor representável por unsigned int: " << ui << endl;

      cout << " " << endl;
    
    return 0;
}

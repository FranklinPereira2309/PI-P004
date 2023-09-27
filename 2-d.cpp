#include <iostream>
#include <string>

using namespace std;

int main() {
    // Usando sequências de escape Unicode para 'ç' e 'ã'
    string cedilha = u8"ç"; // Ou \u00E7 corresponde em Unicode para 'ç'
    string til = u8"ã";     // Ou \u00E3 corresponde em Unicode para 'ã'

    
    cout << "Caractere 'ç': " << cedilha << endl;
    cout << "Caractere 'ã': " << til << endl;

    return 0;
}

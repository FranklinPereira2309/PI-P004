#include <iostream>
#include <limits>

using namespace std;

int main() {
    int menorValor; 
    menorValor = numeric_limits<int>::min();
    int maiorValor;
    maiorValor = numeric_limits<int>::max();
    unsigned long int menorValorULI; 
    menorValorULI = numeric_limits<unsigned long int>::min();
    unsigned long int maiorValorULI;
    maiorValorULI = numeric_limits<unsigned long int>::max();
    unsigned long int uli;
    uli = maiorValorULI;
    long int menorValorLI; 
    menorValorLI = numeric_limits<long int>::min();
    long int maiorValorLI;
    maiorValorLI = numeric_limits<long int>::max();
    long int li;
    li = maiorValorLI;
    unsigned int menorValorUI; 
    menorValorUI = numeric_limits<unsigned int>::min();
    unsigned int maiorValorUI;
    maiorValorUI = numeric_limits<unsigned int>::max();
    unsigned int ui;
    ui = maiorValorUI;
    
    cout << "Menor valor representavel por int: " << menorValor;
    cout << "\nMaior valor representavel por int: " << maiorValor;
    cout << "\nMenor valor representavel por unsigned long int: " << menorValorULI;
    cout << "\nMaior valor representavel por unsigned long int: " << maiorValorULI;
    cout << "\nVariavel 'uli': " << uli;
    cout << "\nMenor valor representavel por long int: " << menorValorLI;
    cout << "\nMaior valor representavel por long int: " << maiorValorLI;
    cout << "\nVariavel 'li': " << li;
    cout << "\nMenor valor representavel por unsigned int: " << menorValorUI;
    cout << "\nMaior valor representavel por unsigned int: " << maiorValorUI;
    cout << "\nVariavel 'ui': " << ui;
    
    cout << endl;
    
    return 0;
}
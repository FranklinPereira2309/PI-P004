#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    long int li;
    unsigned int ui;

    long int maximo = numeric_limits<long int>::max();
    
    
    li = maximo;
    cout << "Valor maximo da li: " << li << endl;
    
    ui = li;
    cout << "Valor de ui: " << ui << endl;

    li = ui;
    cout << "Valor li recendo ui: " << li << endl;

    ui = 9223372036854775807 % 4294967296;
    ui = 294967295;

    cout << "Valor correto do módulo ui recendo li: " << ui << endl;

    
    /*
    Em um sistema de 64 bits, o valor máximo representável em um long int é 2^63 - 1, que é igual a 9223372036854775807. 
    O valor máximo representável em um unsigned int de 64 bits é 2^32 - 1, que é igual a 4294967295. Portanto, o valor 
    de li não cabe em um unsigned int, e o resultado será um valor diferente, devido ao estouro de capacidade.
    */
   
    
    return 0;
}


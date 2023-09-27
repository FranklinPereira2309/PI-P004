#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    unsigned int ui;

    unsigned int maximo = numeric_limits<unsigned int>::max();
    unsigned int minimo = numeric_limits<unsigned int>::min();
    
    
    ui = maximo;
    cout << "Valor maximo da ui: " << ui << endl;
    ui = minimo;
    cout << "Valor minimo da ui: " << ui << endl;
    return 0;
}


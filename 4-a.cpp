#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    float variavelFloat;

    float maximo = numeric_limits<float>::max();
    float minimo = numeric_limits<float>::min();
    
    
    variavelFloat = maximo;
    cout << "Valor maximo da variavelFloat: " << variavelFloat << endl;
    variavelFloat = minimo;
    cout << "Valor minimo da variavelFloat: " << variavelFloat << endl;
    
    return 0;
}


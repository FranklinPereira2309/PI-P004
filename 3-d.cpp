#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    long int li;
    long int maximo = numeric_limits<long int>::max();
    long int minimo = numeric_limits<long int>::min();
    

    li = maximo;
    cout << "Valor maximo da li: " << li << endl;
    li = minimo;
    cout << "Valor minimo da li: " << li << endl;
    
    return 0;
}


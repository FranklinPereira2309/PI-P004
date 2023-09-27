#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    int menorValorInt = numeric_limits<int>::min();
    int maiorValorInt = numeric_limits<int>::max();

    cout << "O menor valor de um int eh: " << menorValorInt << endl;
    cout << "O maior valor de um int eh: " << maiorValorInt << endl;

    unsigned long int menorValorLong = numeric_limits<unsigned long int>::min();
    unsigned long int maiorValorLong = numeric_limits<unsigned long int>::max();

        cout << "\nO menor valor de um unsigned long int eh: " << menorValorLong << endl;
    cout << "O maior valor de um unsigned long int eh: " << maiorValorLong << endl;

    int li = static_cast<long int>(maiorValorLong);    
    unsigned long int uli = static_cast<unsigned long int>(li);

    cout << "\nValor de li: " << li << endl;
    cout << "Valor de uli depois de li: " << uli;

    cout << "\n" << endl;

    li = static_cast<long int>(maiorValorLong);
    cout << "o maior valor para uma variavel long int eh: "
    << maiorValorLong << endl;

    li = static_cast<long int>(menorValorLong);  
    cout << "o maior valor para uma variavel long int eh: "
    << menorValorLong << endl;

    

    cout << "\n";

    return 0;
}

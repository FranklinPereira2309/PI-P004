#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    double num1;
    long double num2;

    double valorMaximo = numeric_limits<double>::max();
    
    num1 = valorMaximo;
    num2 = valorMaximo;

    cout << "Resultado do double: " << num1 * 2.0 << endl;
    cout << "Resultado do long double: " << num2 * 2.0 << endl;

    return 0;
}

/*
* O tipo double é utilizado para representar números de ponto flutuante de precisão simples.
* O tipo long double é utilizado para representar números de ponto flutuante de precisão estendida, 
  que oferece maior precisão em comparação com double.
 -> O resultado acima demonstra: o double resulta em "infinito" (inf) devido ao estouro da faixa de representação, 
  enquanto long double pode acomodar o valor.


*/

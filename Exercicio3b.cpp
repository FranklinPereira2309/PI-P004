#include <iostream>
#include <limits>

using namespace std;

int main (){

    unsigned long int uli;

    cout << "Maior valor que pode ser armazenado na variavel INT: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel INT: " << numeric_limits<int>::min() << endl;
    cout << "Maior valor que pode ser armazenado na variavel UNSIGNED LONG INT: " << numeric_limits<unsigned long int>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel UNSIGNED LONG INT: " << numeric_limits<unsigned long int>::min() << endl;

    uli = numeric_limits<unsigned long int>::max();

    cout  << "Valor de ULI: " << uli << endl;


    return 0;
}
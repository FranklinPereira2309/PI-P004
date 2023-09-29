#include <iostream>
#include <limits>

using namespace std;

int main (){

    cout << "Maior valor que pode ser armazenado na variavel INT: " << numeric_limits<int>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel INT: " << numeric_limits<int>::min() << endl;



    return 0;
}
#include <iostream>,
#include <limits>

using namespace std;

int main (){

    
    cout << "Maior valor que pode ser armazenado na variavel INT: " << numeric_limits<float>::max() << endl;
    cout << "Menor valor que pode ser armazenado na variavel INT: " << numeric_limits<float>::min() << endl;


    return 0;
}
#include <iostream>
#include <limits>

using namespace std;

int main() {
    
    int valorMaxInt = numeric_limits<int>::max();
    int valorMinInt = numeric_limits<int>::min();

   
    cout << "Valor máximo de int: " << valorMaxInt << endl;
    cout << "Valor mínimo de int: " << valorMinInt << endl;

    return 0;
}

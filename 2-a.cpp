#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numeros = "0123456789";
    for(int i =0; i < 10; i++) {
            cout << "\'" <<numeros[i] << "\'" << " - " << int(numeros[i]) << endl;

        }
   
    return 0;
}
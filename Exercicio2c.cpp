#include <iostream>

using namespace std;

int main(){

    char n;

    cout << "Digite um caracter: " << endl;
    cin >> n;
    

    cout << "CHAR - " << "DEC" << " - " << "OCT" << " - " << "HEX" << endl;
    cout << "'" << n << "'" << " - " << dec << int (n) << " - " << oct << int (n) << " - " << hex << int (n) << endl;

    return 0;
}
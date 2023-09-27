#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float numero = 2;
    int casasDecimais, sair=1;
    bool confirmeSair = true;

    while(confirmeSair) {
        
        cout << "Digite um número par entre (2, 4, 8, 16): ";
        cin >> numero;
        cout << "Digite quantas casas deciamis? ";
        cin >> casasDecimais;
            
        cout << fixed << setprecision(casasDecimais) << numero << endl;
        cout << "0 - SAIR / 1- CONTINUAR: ";
        cin >> sair;
        confirmeSair = sair == 0? false : true;
    }
    
    
    
    return 0;
}


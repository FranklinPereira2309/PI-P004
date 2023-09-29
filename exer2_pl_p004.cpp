/*Para aramezanar um caracter especial foi necessario 
adicionar a biblioteca cstring ao programa. 
Dessa forma, o comando size_t, bem como strlen ficou disponível.*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main(){

    char caracter;
    char caracterEspecial [10];

        cout << "O tamanho do caracter eh: " << endl;

    for (char c = '0'; c <= '9'; c++) {

        cout << "'" << c << "'" << " - " << int(c) << endl;
        
    }
    for (char c = '0'; c <= '9'; c++) {

        cout << "'" << c << "'" << " - " << oct << int(c) << " (Octal) " << endl;
        cout << "'" << c << "'" << " - " << hex << int(c) << " (Hexadecimal) " << endl;
    }

    cout << "Digite um caracter: ";
    cin >> caracter;

    cout << "'" << caracter << "'" << " - " << int(caracter) << endl;
    
    if(caracter != false){        
    cout << oct << int(caracter) << " (Octal), ";
    cout << hex << int(caracter) << " (Hexadecimal)" << endl;

    }

    cout << "Digite um caracter especial: ";
    cin >> caracterEspecial;

    size_t tamanho = strlen(caracterEspecial);
    cout << "O tamanhod do caracter especial" << " em bytes eh: " << tamanho << endl;

               
return 0;
}

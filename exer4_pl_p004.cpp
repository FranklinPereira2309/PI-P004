/* As variaveis de maior precisao ocupao mais espaço de memoria.
Em outras palavras, demandam maior processamento.*/

#include <iostream>
#include <limits>
#include <cmath> 
#include <iomanip>

using namespace std;

int main() {
    
    cout << "O menor valor representado por um float: " 
         << numeric_limits<float>::min() << endl;

    cout << "O maior valor representado por um float: " 
         << numeric_limits<float>::max() << endl;

    float pif = M_PI; 

    cout << "O tamanho em bitys de pid eh: " << sizeof(pif) << endl;

    cout << "O valor de pi com o maior precisao em float eh: " 
         << fixed << setprecision(20) << pif << endl;

    cout << "O valor de pi com duas casas decimais eh: " 
         << fixed << setprecision(2) << pif << endl;

    cout << "O valor de pi com quatro casas decimais eh: " 
         << fixed << setprecision(4) << pif << endl;
    
    cout << "O valor de pi com oito casas decimais eh: " 
         << fixed << setprecision(8) << pif << endl;

    cout << "O valor de pi com dezesseis casas decimais eh: "  
         << fixed << setprecision(16) << pif << endl;

     double pid = M_PI;
     cout << "O valor de pi com o maximo de casas decimais eh: " 
          << pid << endl;

     cout << "O tamanho em bitys de pid eh: " << sizeof(pid) << endl;

     cout << "O valor de pi com duas casas decimais eh: " 
         << fixed << setprecision(2) << pid << endl;

    cout << "O valor de pi com quatro casas decimais eh: " 
         << fixed << setprecision(4) << pid << endl;
    
    cout << "O valor de pi com oito casas decimais eh: " 
         << fixed << setprecision(8) << pid << endl;
    
    cout << "O valor de pi com dezesseis casas decimais eh: "  
         << fixed << setprecision(16) << pid << endl;
     //Os valores de pi apresentaram diferenças 
     //nos valores a partir da 5 casa decimal

    return 0;
}

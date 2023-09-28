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

    cout << "O valor de pi com o maior precisão em float eh: " 
         << fixed << setprecision(20) << pif << endl;

    cout << "O valor de pi com duas casas decimais eh: " 
         << fixed << setprecision(2) << pif << endl;

    cout << "O valor de pi com quatro casas decimais eh: " 
         << fixed << setprecision(4) << pif << endl;
    
    cout << "O valor de pi com oito casas decimais eh: " 
         << fixed << setprecision(8) << pif << endl;

    cout << "O valor de pi com dezesseis casas decimais eh: "  
         << fixed << setprecision(16) << pif << endl;

    return 0;
}

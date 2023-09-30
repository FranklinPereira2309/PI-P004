#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    float menor_valor = numeric_limits<float>::min();
    float maior_valor = numeric_limits<float>::max();
    float _pif = 3.14159265358979323846f;
    double pid = 3.14159265358979323846;

    cout << "Menor valor representável por float: " << menor_valor << endl;
    cout << "Maior valor representável por float: " << maior_valor << endl;
    cout << " " << endl;

    float pif = 3.14159265358979323846f; 
    cout << "Valor de pi com muitas casas decimais (float): " << pif << endl;
    cout << " " << endl;
    
    cout << "Valor de pi com 2 casas decimais: " << fixed << setprecision(2) << _pif << endl;
    cout << "Valor de pi com 4 casas decimais: " << fixed << setprecision(4) << _pif << endl;
    cout << "Valor de pi com 8 casas decimais: " << fixed << setprecision(8) << _pif << endl;
    cout << "Valor de pi com 16 casas decimais: " << fixed << setprecision(16) << _pif << endl;

    
    cout << "Valor de pi com muitas casas decimais (double): " << pid << endl;
    cout << " " << endl;

    cout << "Precisão de double: " << numeric_limits<double>::digits10 << " casas decimais" << endl;
    cout << "Precisão de long double: " << numeric_limits<long double>::digits10 << " casas decimais" << endl;

    cout << " " << endl;

    return 0;
}

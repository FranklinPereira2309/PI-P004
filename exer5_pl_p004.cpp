//resolvendo a questão 5
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    const double pi = 3.14159265358979323846;  
    char piChar = '3'; 

    cout << "Char: " << piChar << endl;

  
    int piInt = static_cast<int>(pi);
    cout << "Int: " << piInt << endl;

    unsigned long int piULongInt = static_cast<unsigned long int>(pi);
    cout << "Unsigned Long Int: " << piULongInt << endl;

    unsigned int piUInt = static_cast<unsigned int>(pi);
    cout << "Unsigned Int: " << piUInt << endl;

    float piFloat = static_cast<float>(pi);
    cout << "Float: " << fixed << setprecision(7) << piFloat << endl;

    double piDouble = static_cast<double>(pi);
    cout << "Double: " << fixed << setprecision(15) << piDouble << endl;

    long double piLongDouble = static_cast<long double>(pi);
    cout << "Long Double: " << fixed << setprecision(19) << piLongDouble << endl;


return 0;
}
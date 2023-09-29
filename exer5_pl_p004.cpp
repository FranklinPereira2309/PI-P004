#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Definindo o valor de pi
    const double pi = 3.14159265358979323846;

    // Tipo char
    char piChar = '3'; // Apenas o primeiro caractere da string
    cout << "Char: " << piChar << endl;

    // Tipo int
    int piInt = static_cast<int>(pi);
    cout << "Int: " << piInt << endl;

    // Tipo unsigned long int
    unsigned long int piULongInt = static_cast<unsigned long int>(pi);
    cout << "Unsigned Long Int: " << piULongInt << endl;

    // Tipo unsigned int
    unsigned int piUInt = static_cast<unsigned int>(pi);
    cout << "Unsigned Int: " << piUInt << endl;

    // Tipo float
    float piFloat = static_cast<float>(pi);
    cout << "Float: " << fixed << setprecision(7) << piFloat << endl;

    // Tipo double
    double piDouble = static_cast<double>(pi);
    cout << "Double: " << fixed << setprecision(15) << piDouble << endl;

    // Tipo long double
    long double piLongDouble = static_cast<long double>(pi);
    cout << "Long Double: " << fixed << setprecision(19) << piLongDouble << endl;

    return 0;
}


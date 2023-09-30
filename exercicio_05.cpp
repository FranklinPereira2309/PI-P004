#include <iostream>
#include <string>

using namespace std;


int main() {
    
    // Tipos de dados inteiros
    int valor = 42;
    int valor_zero = 0;

    // Tipos de dados ponto flutuante
    float float_value = 3.14f;
    double double_value = 0.0;

    // Ponteiros
    int* int_pointer = nullptr;
    int* int_pointer_valid = &valor;

    // Strings
    string empty_string = "";
    string non_empty_string = "Hello, World!";

    // Conversões para bool
    bool bool_from_int = valor;
    bool bool_from_int_zero = valor_zero;
    bool bool_from_float = float_value;
    bool bool_from_double = double_value;
    bool bool_from_pointer = int_pointer_valid;
    //bool bool_from_empty_string = empty_string;
    //bool bool_from_non_empty_string = non_empty_string;

    // Exibição dos resultados
    cout << "Valor: " << bool_from_int << endl;
    cout << "Valor zero: " << bool_from_int_zero << endl;
    cout << "float: " << bool_from_float << endl;
    cout << "double: " << bool_from_double << endl;
    cout << "pointer: " << bool_from_pointer << endl;
    //cout << "bool_from_empty_string: " << bool_from_empty_string << endl;
    //cout << "bool_from_non_empty_string: " << bool_from_non_empty_string << endl;
    cout << "" << endl;

    return 0;
}

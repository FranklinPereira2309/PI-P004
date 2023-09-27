#include <iostream>

using namespace std;

int main() {
    int variavelInteiro;
    double variavelDouble;
    char variavelChar;
    

    
    cout << "Digite um valor inteiro: ";
    cin >> variavelInteiro;

    cout << "Digite um valor de ponto flutuante: ";
    cin >> variavelDouble;

    cout << "Digite um caractere: ";
    cin >> variavelChar;

   
    if (variavelInteiro) {
        cout << "Valor inteiro é verdadeiro." << endl;
    } else {
        cout << "Valor inteiro é falso." << endl;
    }

    if (variavelDouble) {
        cout << "Valor de ponto flutuante é verdadeiro." << endl;
    } else {
        cout << "Valor de ponto flutuante é falso." << endl;
    }

    if (variavelChar) {
        cout << "Caractere é verdadeiro." << endl;
    } else {
        cout << "Caractere é falso." << endl;
    }

    

    return 0;
}

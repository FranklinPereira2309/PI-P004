#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned long int uli;
    long int li;
    unsigned long int maximo = numeric_limits<unsigned long int>::max();
    

    li = maximo;
    cout << "Valor li recebendo uli: " << li << endl;

    /*
    Justificativa do que acontece:

    1- unsigned long int (uli) é um tipo de dado sem sinal (ou seja, ele não pode armazenar valores negativos) que normalmente usa todos os bits para 
    representar valores não negativos. 
    Por exemplo, em uma máquina típica de 32 bits, um unsigned long int usaria todos os 32 bits para representar valores não negativos.

    2- long int (li) é um tipo de dado com sinal, o que significa que ele pode representar valores positivos e negativos. 
    Ele usa o bit mais significativo (o bit mais à esquerda) para representar o sinal do número: 0 para positivo e 1 para negativo.

    3- Quando você atribui um unsigned long int a um long int, o compilador fará uma conversão implícita de tipos. 
    Isso pode resultar em problemas quando o valor do unsigned long int não cabe no intervalo permitido para o long int.

    4- O valor -1 é representado em binário como todos os bits iguais a 1. Por exemplo, em um int de 32 bits, -1 seria representado como 0xFFFFFFFF. 
    Isso ocorre porque, quando interpretado como um número com sinal, todos os bits 1 representam -1.

    5- Se você tentar atribuir um valor unsigned long int que tenha todos os bits definidos como 1 para um long int, 
    o resultado será -1 porque os bits 1 serão interpretados como um valor com sinal.

    */
    
    return 0;
}


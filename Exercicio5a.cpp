#include <iostream>

using namespace std;

int main (){

    
    cout << "TRUE em int: " << static_cast<int>(true) << endl;
    cout << "FALSE em int: " << static_cast<int>(false) << endl;

    cout << "TRUE em float: " << static_cast<float>(true) << endl;
    cout << "FALSE em float: " << static_cast<float>(false) << endl;

    cout << "TRUE em double: " << static_cast<double>(true) << endl;
    cout << "FALSE em double: " << static_cast<double>(false) << endl;

    cout << "TRUE em long int: " << static_cast<long int>(true) << endl;
    cout << "FALSE em long int: " << static_cast<long int>(false) << endl;



    return 0;
}   
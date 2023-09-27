#include <iostream>
#include <limits>

using namespace std;

int main() {

    cout << "O menor valor representável por um float: " 
    << numeric_limits<float>::min() << endl;
    cout << "O maior valor representável por um float: " 
    << numeric_limits<float>::max() << endl;

    return 0;
}



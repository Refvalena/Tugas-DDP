#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    a += b;
    cout << "Hasil a += b: " << a << endl;
    a -= b;
    cout << "Hasil a -= b: " << a << endl;
    a *= b;
    cout << "Hasil a *= b: " << a << endl;
    a /= b;
    cout << "Hasil a /= b: " << a << endl;
    a %= b;
    cout << "Hasil a %= b: " << a << endl;
    
    return 0;
}


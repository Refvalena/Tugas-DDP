#include <iostream>
using namespace std;

int main() {
    int num, digitCount = 0;

    cout << "Masukkan bilangan: ";
    cin >> num;

    do {
        num /= 10;
        digitCount++;
    } while (num != 0);

    cout << "Jumlah digit dalam bilangan adalah: " << digitCount << endl;

    return 0;
}


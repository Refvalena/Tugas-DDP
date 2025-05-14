#include <iostream>
using namespace std;

int main() {
    int number, i = 1;
    cout << "Masukkan sebuah angka: ";
    cin >> number;

    cout << "Faktor dari " << number << " adalah: ";
    while (i <= number) {
        if (number % i == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;

    return 0;
}


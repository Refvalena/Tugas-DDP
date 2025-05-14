#include <iostream>
using namespace std;

int maksimum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x, y;
    cout << "Masukkan dua bilangan: ";
    cin >> x >> y;
    cout << "Nilai maksimum: " << maksimum(x, y) << endl;
    return 0;
}


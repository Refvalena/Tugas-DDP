#include <iostream>
using namespace std;

int jumlahDigit(int n) {
    if (n == 0) return 0;
    return n % 10 + jumlahDigit(n / 10);
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;
    cout << "Jumlah digit: " << jumlahDigit(n) << endl;
    return 0;
}


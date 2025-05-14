#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int num;
    cout << "Masukkan angka: ";
    cin >> num;
    cout << "Faktorial dari " << num << " adalah " << faktorial(num) << endl;
    return 0;
}


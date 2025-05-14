#include <iostream>
using namespace std;

bool isPrima(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Masukkan bilangan: ";
    cin >> num;
    if (isPrima(num)) cout << num << " adalah bilangan prima.\n";
    else cout << num << " bukan bilangan prima.\n";
    return 0;
}


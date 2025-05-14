#include <iostream>
using namespace std;

bool isGenap(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    cout << "Masukkan bilangan: ";
    cin >> num;
    if (isGenap(num)) cout << num << " adalah bilangan genap.\n";
    else cout << num << " adalah bilangan ganjil.\n";
    return 0;
}


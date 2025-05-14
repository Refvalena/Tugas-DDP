#include <iostream>
using namespace std;

void urutkan(int &a, int &b, int &c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
}

int main() {
    int x, y, z;
    cout << "Masukkan tiga bilangan: ";
    cin >> x >> y >> z;
    urutkan(x, y, z);
    cout << "Bilangan setelah diurutkan: " << x << " " << y << " " << z << endl;
    return 0;
}


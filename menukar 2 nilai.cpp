#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Masukkan dua angka:\n";
    cin >> x >> y;

    cout << "Sebelum swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "Setelah swap: x = " << x << ", y = " << y << endl;

    return 0;
}


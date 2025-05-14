#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int increment;

    cout << "Masukkan nilai yang ingin ditambahkan: ";
    cin >> increment;

    for (int i = 0; i < 5; i++) {
        arr[i] += increment;
    }

    cout << "Isi array setelah ditambah: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


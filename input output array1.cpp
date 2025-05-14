#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    cout << "Masukkan 5 elemen array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Elemen array yang dimasukkan adalah: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


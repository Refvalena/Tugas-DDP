#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size], key, found = -1;

    cout << "Masukkan 5 elemen array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> key;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Elemen ditemukan pada indeks ke-" << found << endl;
    else
        cout << "Elemen tidak ditemukan.\n";
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];

    cout << "Masukkan 5 elemen array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Nilai maksimum adalah: " << max << endl;
    return 0;
}


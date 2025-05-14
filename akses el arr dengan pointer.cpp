#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan " << n << " elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *p = arr;
    cout << "Elemen array melalui pointer:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": " << *(p + i) << endl;
    }

    return 0;
}


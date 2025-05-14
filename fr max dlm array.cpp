#include <iostream>
using namespace std;

int maksimum(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[n - 1], maksimum(arr, n - 1));
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Nilai maksimum: " << maksimum(arr, n) << endl;
    return 0;
}


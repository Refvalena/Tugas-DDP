#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size], sum = 0;

    cout << "Masukkan 5 elemen array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = static_cast<float>(sum) / size;
    cout << "Total: " << sum << ", Rata-rata: " << avg << endl;
    return 0;
}


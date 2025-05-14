#include <iostream>
using namespace std;

int main() {
    int rows, i = 1, count = 1;

    cout << "Masukkan jumlah baris: ";
    cin >> rows;

    cout << "Pola segitiga bilangan:" << endl;
    do {
        int j = 1;
        do {
            cout << count << " ";
            count++;
            j++;
        } while (j <= i);
        cout << endl;
        i++;
    } while (i <= rows);

    return 0;
}


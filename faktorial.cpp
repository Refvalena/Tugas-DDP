#include <iostream>
using namespace std;

int main() {
    int number;
    long long factorial = 1; 


    cout << "Masukkan angka: ";
    cin >> number;


    if (number < 0) {
        cout << "Faktorial dari angka negatif tidak didefinisikan." << endl;
    } else {

        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
   
        cout << "Faktorial dari " << number << " adalah " << factorial << endl;
    }

    
    cout << "Program selesai. Tekan enter untuk keluar...";
    cin.get();
    cin.get();
    return 0;
}


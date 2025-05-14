#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. mie ayam" << endl;
        cout << "2. bakso" << endl;
        cout << "3. siomay" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Anda memilih mie ayam " << endl;
                break;
            case 2:
                cout << "Anda memilih bakso " << endl;
                break;
            case 3:
                cout << "Anda memilih siomay " << endl;
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Coba lagi." << endl;
        }
    } while (choice != 4);

    return 0;
}


#include <iostream>

using namespace std;

int main() {
    // Perulangan untuk setiap orang
    for (int orang = 1; orang <= 3; ++orang) {
        cout << "Cek suhu tubuh orang ke-" << orang << endl;

        // Perulangan untuk setiap pengukuran suhu
        int pengukuran = 1;
        do {
            cout << "Pengukuran " << pengukuran << ": Gunakan termometer\n";
            ++pengukuran;
        } while (pengukuran <= 2);

        cout << "Suhu tubuh orang ke-" << orang << " telah dicek.\n\n";
    }

    cout << "Semua orang telah dicek suhu tubuhnya. Tetap jaga kesehatan!\n";

    return 0;
}


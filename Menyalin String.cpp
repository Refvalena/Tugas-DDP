#include <iostream>
using namespace std;

void copyString(char* source, char* destination) {
    while (*source != '\0') {
        *destination = *source; // Salin karakter dari source ke destination
        source++;
        destination++;
    }
    *destination = '\0'; // Tambahkan karakter null di akhir string
}

int main() {
    char source[100], destination[100];

    cout << "Masukkan string sumber: ";
    cin.getline(source, 100);

    copyString(source, destination);

    cout << "String sumber: " << source << endl;
    cout << "String tujuan setelah disalin: " << destination << endl;

    return 0;
}


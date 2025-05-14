#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    int len = strlen(str); // Panjang string
    char* start = str;     // Pointer ke awal string
    char* end = str + len - 1; // Pointer ke akhir string

    while (start < end) {
        // Tukar karakter di posisi awal dan akhir
        char temp = *start;
        *start = *end;
        *end = temp;

        // Pindahkan pointer
        start++;
        end--;
    }
}

int main() {
    char str[100];

    cout << "Masukkan sebuah string: ";
    cin.getline(str, 100);

    cout << "String sebelum dibalik: " << str << endl;

    reverseString(str);

    cout << "String setelah dibalik: " << str << endl;

    return 0;
}


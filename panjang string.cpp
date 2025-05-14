#include <iostream>
using namespace std;

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    cout << "Masukkan string: ";
    cin >> str;

    cout << "Panjang string \"" << str << "\" adalah: " << stringLength(str) << endl;
    return 0;
}


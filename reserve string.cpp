#include <iostream>
using namespace std;

void reverseString(char *str) {
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;

    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

int main() {
    char str[100];
    cout << "Masukkan string: ";
    cin >> str;

    reverseString(str);
    cout << "String setelah di-reverse: " << str << endl;

    return 0;
}


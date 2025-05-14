#include <iostream>
using namespace std;

int main() {
    int a = 20;
    int *ptr = &a;
    *ptr = 30; // Mengubah nilai a melalui pointer
    cout << "Nilai a: " << a << endl;
    return 0;
}


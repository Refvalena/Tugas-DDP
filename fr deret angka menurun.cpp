#include <iostream>
using namespace std;

void deretMenurun(int n) {
    if (n == 0) return;
    cout << n << " ";
    deretMenurun(n - 1);
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;
    deretMenurun(n);
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

void increment(int *n) {
    (*n)++;
}

int main() {
    int num = 5;
    increment(&num);
    cout << "Nilai setelah increment: " << num << endl;
    return 0;
}


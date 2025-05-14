#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int *p = &x;
    int **pp = &p;
    cout << "Nilai x: " << **pp << endl;
    return 0;
}


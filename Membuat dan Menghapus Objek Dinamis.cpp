#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    MyClass(int val) {
        value = val;
        cout << "Objek dibuat dengan nilai: " << value << endl;
    }

    ~MyClass() {
        cout << "Objek dengan nilai " << value << " dihancurkan." << endl;
    }

    void display() {
        cout << "Nilai objek: " << value << endl;
    }
};

int main() {
    MyClass* obj = new MyClass(50);  // Membuat objek dinamis

    obj->display();  // Mengakses metode objek menggunakan pointer

    delete obj;  // Menghapus objek dan memanggil destructor

    return 0;
}


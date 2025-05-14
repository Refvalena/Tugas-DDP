#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person p1 = {"Alice", 30};
    Person* ptr = &p1;  // Pointer yang menunjuk ke objek p1

    cout << "Mengakses elemen struktur menggunakan pointer:" << endl;
    cout << "Nama: " << ptr->name << endl;
    cout << "Usia: " << ptr->age << endl;

    return 0;
}


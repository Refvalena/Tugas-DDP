#include <iostream>
using namespace std;

int main(){
	
    double hargaPokok, persentaseKeuntungan, hargaJual;

    // Input harga pokok
    cout << "Masukkan harga pokok: ";
    cin >> hargaPokok;

    // Input persentase keuntungan
    cout << "Masukkan persentase keuntungan: ";
    cin >> persentaseKeuntungan;

    // Menghitung harga jual dengan rumus
    hargaJual = hargaPokok + (hargaPokok * persentaseKeuntungan / 100);

    // Output harga jual
    cout << "Harga jual barang adalah: " << hargaJual << endl;

    return 0;
}



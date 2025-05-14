#include <stdio.h>

int main() {
    
    double hargaBarang, persentasePajak, hargaPajak, totalHarga;

    // Input harga barang
    printf("Masukkan harga barang: ");
    scanf("%lf", &hargaBarang);

    // Input persentase pajak
    printf("Masukkan persentase pajak: ");
    scanf("%lf", &persentasePajak);

    // Menghitung harga pajak
    hargaPajak = hargaBarang * (persentasePajak / 100);

    // Menghitung total harga setelah pajak
    totalHarga = hargaBarang + hargaPajak;

    // Output harga pajak dan total harga
    printf("Harga pajak: %.2lf\n", hargaPajak);
    printf("Total harga setelah pajak: %.2lf\n", totalHarga);

    return 0;
}


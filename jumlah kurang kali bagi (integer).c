#include <stdio.h>

int main() {
    
    int angka1 = 10;
    int angka2 = 20;
    int jumlah, selisih, hasilKali, hasilBagi;

    jumlah = angka1 + angka2;
    printf("Jumlah dari %d dan %d adalah: %d\n", angka1, angka2, jumlah);

    selisih = angka1 - angka2;
    printf("Selisih dari %d dan %d adalah: %d\n", angka1, angka2, selisih);

    hasilKali = angka1 * angka2;
    printf("Hasil kali dari %d dan %d adalah: %d\n", angka1, angka2, hasilKali);

    hasilBagi = angka2 / angka1;
    printf("Hasil bagi dari %d dibagi dengan %d adalah: %d\n", angka2, angka1, hasilBagi);


    printf("Perhitungan selesai!\n");

    return 0;
}


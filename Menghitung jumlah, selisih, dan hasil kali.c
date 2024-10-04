#include <stdio.h>

int main(){
    int angka1, angka2;
    int jumlah, selisih, kali;

    // Meminta pengguna untuk memasukkan dua angka
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    // Menghitung jumlah, selisih, dan hasil kali
    jumlah = angka1 + angka2;
    selisih = angka1 - angka2;
    kali = angka1 * angka2;

    // Menampilkan hasil
    printf("Jumlah: %d\n", jumlah);
    printf("Selisih: %d\n", selisih);
    printf("Hasil Kali: %d\n", kali);

    return 0;
}



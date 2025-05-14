#include <stdio.h>

int main() {
    int angka1, angka2, pilihan;

    // Meminta input dua angka dari pengguna
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    // Menampilkan pilihan operasi
    printf("Pilih operasi:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1-4): ");
    scanf("%d", &pilihan);

    // Kondisional untuk memproses pilihan pengguna
    if (pilihan == 1) {
        printf("Hasil penjumlahan: %d\n", angka1 + angka2);
    } else if (pilihan == 2) {
        printf("Hasil pengurangan: %d\n", angka1 - angka2);
    } else if (pilihan == 3) {
        printf("Hasil perkalian: %d\n", angka1 * angka2);
    } else if (pilihan == 4) {
        if (angka2 != 0) {
            printf("Hasil pembagian: %.2f\n", (float)angka1 / angka2);
        } else {
            printf("Pembagian dengan nol tidak diperbolehkan!\n");
        }
    } else {
        printf("Pilihan tidak valid!\n");
    }

    return 0;
}

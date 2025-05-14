#include <stdio.h>

int main() {
    float nilai_matematika, nilai_bahasa, nilai_sains, rata_rata;

    // Meminta input nilai untuk tiga mata pelajaran
    printf("Masukkan nilai Matematika: ");
    scanf("%f", &nilai_matematika);
    
    printf("Masukkan nilai Bahasa: ");
    scanf("%f", &nilai_bahasa);
    
    printf("Masukkan nilai Sains: ");
    scanf("%f", &nilai_sains);

    // Menghitung rata-rata nilai
    rata_rata = (nilai_matematika + nilai_bahasa + nilai_sains) / 3;

    // Kondisional untuk menentukan kelulusan berdasarkan rata-rata
    if (rata_rata >= 75) {
        printf("Anda Lulus! Rata-rata nilai: %.2f\n", rata_rata);
    } else {
        printf("Anda Tidak Lulus. Rata-rata nilai: %.2f\n", rata_rata);
    }

    // Mengecek nilai minimum untuk setiap mata pelajaran
    if (nilai_matematika < 60) {
        printf("Nilai Matematika Anda kurang dari batas minimal.\n");
    }
    
    if (nilai_bahasa < 60) {
        printf("Nilai Bahasa Anda kurang dari batas minimal.\n");
    }

    if (nilai_sains < 60) {
        printf("Nilai Sains Anda kurang dari batas minimal.\n");
    }

    return 0;
}


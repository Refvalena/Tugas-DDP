#include <stdio.h>

int main() {
    float jamKerja, tarifPerJam, gaji, lembur = 0;
    int batasJamNormal = 40;

    
    printf("Masukkan jumlah jam kerja: ");
    scanf("%f", &jamKerja);
    printf("Masukkan tarif per jam (dalam rupiah): ");
    scanf("%f", &tarifPerJam);

    // Menghitung gaji dengan atau tanpa lembur
    if (jamKerja > batasJamNormal) {
        // Jika jam kerja melebihi batas, hitung lembur
        lembur = (jamKerja - batasJamNormal) * (tarifPerJam * 1.5);
        gaji = (batasJamNormal * tarifPerJam) + lembur;
    } else {
        // Jika tidak ada lembur
        gaji = jamKerja * tarifPerJam;
    }

    // Menampilkan hasil
    printf("\nJam kerja: %.1f\n", jamKerja);
    printf("Tarif per jam: Rp%.3f\n", tarifPerJam);
    if (lembur > 0) {
        printf("Lembur: Rp%.3f\n", lembur);
    }
    printf("Total gaji: Rp%.3f\n", gaji);

    return 0;
}


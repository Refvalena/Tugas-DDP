#include <stdio.h>

int main() {
    
    double panjangAsli, panjangGambar, skala;

    // Input panjang asli
    printf("Masukkan panjang asli (misal dalam meter): ");
    scanf("%lf", &panjangAsli);

    // Input panjang pada gambar
    printf("Masukkan panjang pada gambar (misal dalam cm): ");
    scanf("%lf", &panjangGambar);

    // Menghitung skala
    skala = panjangGambar / panjangAsli;

    // Output skala
    printf("Skala gambar adalah 1 : %.2lf\n", skala);

    return 0;
}


#include <stdio.h>

int main() {
    
    float alasAtas, alasBawah, tinggi, luas;

    printf("Masukkan panjang alas atas trapesium: ");
    scanf("%f", &alasAtas);

    printf("Masukkan panjang alas bawah trapesium: ");
    scanf("%f", &alasBawah);

    printf("Masukkan tinggi trapesium: ");
    scanf("%f", &tinggi);

    luas = 0.5 * (alasAtas + alasBawah) * tinggi;

    printf("Luas trapesium: %.2f\n", luas);

    return 0;
}


#include <stdio.h>

int main() {
    float angka1, angka2, rataRata;

    printf("Masukkan angka pertama: ");
    scanf("%f", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%f", &angka2);

    rataRata = (angka1 + angka2) / 2;

    printf("Rata-rata dari %.2f dan %.2f adalah: %.2f\n", angka1, angka2, rataRata);

    return 0;
}


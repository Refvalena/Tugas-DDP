#include <stdio.h>

int volumeBalok(int panjang, int lebar, int tinggi) {
    return panjang * lebar * tinggi;
}

int luasPermukaanBalok(int panjang, int lebar, int tinggi) {
    return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

int main() {
    int panjang, lebar, tinggi;
    printf("Masukkan panjang, lebar, dan tinggi balok: ");
    scanf("%d %d %d", &panjang, &lebar, &tinggi);
    printf("Volume balok: %d\n", volumeBalok(panjang, lebar, tinggi));
    printf("Luas permukaan balok: %d\n", luasPermukaanBalok(panjang, lebar, tinggi));
    return 0;
}


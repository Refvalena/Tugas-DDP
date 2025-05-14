#include <stdio.h>

float luasSegitiga(float alas, float tinggi) {
    return 0.5 * alas * tinggi;
}

int main() {
    float alas, tinggi;
    printf("Masukkan alas dan tinggi segitiga: ");
    scanf("%f %f", &alas, &tinggi);
    printf("Luas segitiga adalah: %.2f\n", luasSegitiga(alas, tinggi));
    return 0;
}


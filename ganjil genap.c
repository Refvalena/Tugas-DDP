#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    if (angka % 2 == 0) {
        printf("%d adalah angka genap.\n", angka);
    } else {
        printf("%d adalah angka ganjil.\n", angka);
    }

    return 0;
}


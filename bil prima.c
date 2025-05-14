#include <stdio.h>

int main() {
    int angka, i, prima = 1;

    // Meminta input angka dari pengguna
    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

    // Memeriksa apakah angka lebih kecil dari 2
    if (angka <= 1) {
        printf("%d bukan bilangan prima.\n", angka);
        return 0;
    }

    // Memeriksa apakah angka adalah bilangan prima
    for (i = 2; i <= angka / 2; i++) {
        if (angka % i == 0) {
            prima = 0;
            break;
        }
    }

    // Kondisional untuk menampilkan hasil
    if (prima == 1) {
        printf("%d adalah bilangan prima.\n", angka);
    } else {
        printf("%d bukan bilangan prima.\n", angka);
    }

    return 0;
}

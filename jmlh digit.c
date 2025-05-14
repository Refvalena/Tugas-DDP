#include <stdio.h>

int main() {
    int n, digit, jumlah = 0;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        jumlah += digit;
        n /= 10;
    }

    printf("Jumlah digit adalah: %d\n", jumlah);
    return 0;
}


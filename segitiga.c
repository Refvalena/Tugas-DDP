#include <stdio.h>

int main() {
    int a, b, c;

    // Meminta input panjang tiga sisi segitiga
    printf("Masukkan panjang sisi pertama: ");
    scanf("%d", &a);
    printf("Masukkan panjang sisi kedua: ");
    scanf("%d", &b);
    printf("Masukkan panjang sisi ketiga: ");
    scanf("%d", &c);

    // Mengecek apakah tiga sisi dapat membentuk segitiga
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // Kondisional untuk menentukan tipe segitiga
        if (a == b && b == c) {
            printf("Ini adalah segitiga sama sisi.\n");
        } else if (a == b || a == c || b == c) {
            printf("Ini adalah segitiga sama kaki.\n");
        } else {
            printf("Ini adalah segitiga sembarang.\n");
        }
    } else {
        printf("Tiga sisi ini tidak dapat membentuk segitiga.\n");
    }

    return 0;
}


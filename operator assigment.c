#include <stdio.h>

int main() {
    // Deklarasi variabel
    int a, b, c;

    // Input bilangan untuk variabel a
    printf("Masukkan bilangan untuk a: ");
    scanf("%d", &a);

    // Operator penugasan dasar
    b = a;  // Menugaskan nilai a ke b
    printf("Nilai b setelah b = a: %d\n", b);

    // Operator penugasan dengan penjumlahan (+=)
    b += 5;  // Sama dengan b = b + 5
    printf("Nilai b setelah b += 5: %d\n", b);

    // Operator penugasan dengan pengurangan (-=)
    b -= 2;  // Sama dengan b = b - 2
    printf("Nilai b setelah b -= 2: %d\n", b);

    // Operator penugasan dengan perkalian (*=)
    b *= 3;  // Sama dengan b = b * 3
    printf("Nilai b setelah b *= 3: %d\n", b);

    // Operator penugasan dengan pembagian (/=)
    b /= 4;  // Sama dengan b = b / 4
    printf("Nilai b setelah b /= 4: %d\n", b);

    // Operator penugasan dengan modulus (%=)
    c = b;   // Menugaskan nilai b ke c
    c %= 3;  // Sama dengan c = c % 3
    printf("Nilai c setelah c %%= 3: %d\n", c);

    return 0;
}


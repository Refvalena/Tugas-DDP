#include <stdio.h>

int hitungModulus(int a, int b) {
    return a % b;
}

int main() {
    int x, y;
    printf("Masukkan dua bilangan (a dan b): ");
    scanf("%d %d", &x, &y);
    printf("Sisa pembagian %d %% %d adalah: %d\n", x, y, hitungModulus(x, y));
    return 0;
}


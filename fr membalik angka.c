#include <stdio.h>


void balikAngka(int n) {
    if (n == 0) return;
    printf("%d", n % 10);
    balikAngka(n / 10);
}

int main() {
    int n;
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &n);
    printf("Angka setelah dibalik: ");
    balikAngka(n);
    printf("\n");
    return 0;
}


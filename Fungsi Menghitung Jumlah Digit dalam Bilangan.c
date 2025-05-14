#include <stdio.h>

int jumlahDigit(int n) {
    if (n == 0) return 0;
    return 1 + jumlahDigit(n / 10);
}

int main() {
    int num;
    printf("Masukkan bilangan: ");
    scanf("%d", &num);
    printf("Jumlah digit: %d\n", jumlahDigit(num));
    return 0;
}


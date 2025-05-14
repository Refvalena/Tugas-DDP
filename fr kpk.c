#include <stdio.h>

int fpb(int a, int b) {
    if (b == 0) return a;
    return fpb(b, a % b);
}

int kpk(int a, int b) {
    return (a * b) / fpb(a, b);
}

int main() {
    int a, b;
    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &a, &b);
    printf("KPK dari %d dan %d adalah %d\n", a, b, kpk(a, b));
    return 0;
}


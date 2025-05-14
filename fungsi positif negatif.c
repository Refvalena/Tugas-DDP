#include <stdio.h>

const char* cekBilangan(int n) {
    if (n > 0) return "Positif";
    else if (n < 0) return "Negatif";
    else return "Nol";
}

int main() {
    int num;
    printf("Masukkan bilangan: ");
    scanf("%d", &num);
    printf("Bilangan tersebut adalah: %s\n", cekBilangan(num));
    return 0;
}


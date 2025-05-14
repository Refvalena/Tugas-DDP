#include <stdio.h>

void cetakBaris(int n) {
    if (n == 0) return;
    printf("*");
    cetakBaris(n - 1);
}


void cetakSegitiga(int n) {
    if (n == 0) return;
    cetakSegitiga(n - 1);
    cetakBaris(n);
    printf("\n");
}

int main() {
    int n;
    printf("Masukkan tinggi segitiga: ");
    scanf("%d", &n);
    cetakSegitiga(n);
    return 0;
}


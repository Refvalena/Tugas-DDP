#include <stdio.h>

int main() {
    int n, i, angka, jumlah = 0;

    printf("Masukkan jumlah angka yang ingin dijumlahkan: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan angka %d: ", i);
        scanf("%d", &angka);
        jumlah += angka;
    }

    printf("Jumlah total: %d\n", jumlah);
    return 0;
}



#include <stdio.h>

int main() {
    int n, i;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array1[n], array2[n], result[n];
    printf("Masukkan elemen array pertama:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }
    printf("Masukkan elemen array kedua:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < n; i++) {
        result[i] = array1[i] + array2[i];
    }

    printf("Hasil penjumlahan array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}


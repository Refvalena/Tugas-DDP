#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Masukkan jumlah elemen array pertama: ");
    scanf("%d", &n1);
    int array1[n1];
    printf("Masukkan elemen array pertama:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Masukkan jumlah elemen array kedua: ");
    scanf("%d", &n2);
    int array2[n2];
    printf("Masukkan elemen array kedua:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    int result[n1 + n2];
    for (i = 0; i < n1; i++) result[i] = array1[i];
    for (j = 0; j < n2; j++) result[i++] = array2[j];

    printf("Array hasil penggabungan: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}


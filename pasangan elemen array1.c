#include <stdio.h>

int main() {
    int n, i, j, target;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Masukkan nilai target: ");
    scanf("%d", &target);

    printf("Pasangan elemen dengan jumlah %d:\n", target);
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] + array[j] == target) {
                printf("(%d, %d)\n", array[i], array[j]);
            }
        }
    }

    return 0;
}


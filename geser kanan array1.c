#include <stdio.h>

int main() {
    int n, i, temp;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    temp = array[n - 1];
    for (i = n - 1; i > 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = temp;

    printf("Array setelah digeser ke kanan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}


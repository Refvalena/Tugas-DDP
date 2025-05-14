#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] > 0) pos++;
        else if (array[i] < 0) neg++;
        else zero++;
    }

    printf("Jumlah elemen positif: %d\n", pos);
    printf("Jumlah elemen negatif: %d\n", neg);
    printf("Jumlah elemen nol: %d\n", zero);
    return 0;
}


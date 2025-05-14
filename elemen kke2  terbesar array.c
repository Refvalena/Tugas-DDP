#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, max1, max2;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max1 = max2 = INT_MIN;
    for (i = 0; i < n; i++) {
        if (array[i] > max1) {
            max2 = max1;
            max1 = array[i];
        } else if (array[i] > max2 && array[i] != max1) {
            max2 = array[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("Tidak ada elemen kedua terbesar\n");
    } else {
        printf("Elemen kedua terbesar: %d\n", max2);
    }
    return 0;
}


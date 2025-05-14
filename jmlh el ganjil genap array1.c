#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Jumlah elemen genap: %d\n", even);
    printf("Jumlah elemen ganjil: %d\n", odd);
    return 0;
}


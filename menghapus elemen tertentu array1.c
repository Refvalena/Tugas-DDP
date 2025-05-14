#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Masukkan indeks elemen yang ingin dihapus: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Indeks tidak valid\n");
    } else {
        for (i = pos; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--;
        printf("Array setelah penghapusan: ");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
    return 0;
}


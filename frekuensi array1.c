#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    int array[n], freq[n];
    printf("Masukkan elemen array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        freq[i] = -1;
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0) freq[i] = count;
    }

    printf("Frekuensi elemen:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d muncul %d kali\n", array[i], freq[i]);
        }
    }
    return 0;
}


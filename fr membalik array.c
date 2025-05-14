#include <stdio.h>

void balikArray(int arr[], int awal, int akhir) {
    if (awal >= akhir) return;
    int temp = arr[awal];
    arr[awal] = arr[akhir];
    arr[akhir] = temp;
    balikArray(arr, awal + 1, akhir - 1);
}

int main() {
    int n;
    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Masukkan elemen array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    balikArray(arr, 0, n - 1);
    printf("Array setelah dibalik: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}


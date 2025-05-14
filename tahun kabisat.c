#include <stdio.h>

int main() {
    int tahun;

    // Meminta input tahun dari pengguna
    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    // Kondisi untuk memeriksa apakah tahun kabisat atau tidak
    if (tahun % 400 == 0) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else if (tahun % 100 == 0) {
        printf("%d bukan tahun kabisat.\n", tahun);
    } else if (tahun % 4 == 0) {
        printf("%d adalah tahun kabisat.\n", tahun);
    } else {
        printf("%d bukan tahun kabisat.\n", tahun);
    }

    // Menampilkan apakah tahun tersebut di atas atau di bawah tahun 2000
    if (tahun > 2000) {
        printf("Tahun ini lebih besar dari 2000.\n");
    } else if (tahun < 2000) {
        printf("Tahun ini lebih kecil dari 2000.\n");
    } else {
        printf("Tahun ini adalah tahun 2000.\n");
    }

    return 0;
}


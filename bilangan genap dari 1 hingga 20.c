#include <stdio.h>

int main() {
    int i;

    printf("Bilangan genap dari 1 hingga 20:\n");

    // Menggunakan loop untuk menampilkan bilangan genap
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) { // Memeriksa apakah i genap
            printf("%d ", i);
        }
    }

    printf("\n"); // Menampilkan baris baru setelah semua bilangan genap

    return 0; // Mengindikasikan bahwa program selesai dengan sukses
}


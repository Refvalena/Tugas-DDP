#include <stdio.h>
#include <string.h>

struct Buku {
    char judul[50];
    char penulis[50];
    float harga;
};

int main() {
    struct Buku b;
    printf("Masukkan judul buku: ");
    fgets(b.judul, sizeof(b.judul), stdin);
    b.judul[strcspn(b.judul, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan penulis buku: ");
    fgets(b.penulis, sizeof(b.penulis), stdin);
    b.penulis[strcspn(b.penulis, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan harga buku: ");
    scanf("%f", &b.harga);

    printf("\nData Buku:\n");
    printf("Judul: %s\n", b.judul);
    printf("Penulis: %s\n", b.penulis);
    printf("Harga: %.2f\n", b.harga);

    return 0;
}


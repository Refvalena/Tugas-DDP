#include <stdio.h>

struct Orang {
    char nama[50];
    int tahun_lahir;
};

int hitungUsia(int tahun_lahir) {
    int tahun_sekarang = 2025;
    return tahun_sekarang - tahun_lahir;
}

int main() {
    struct Orang orang;
    printf("Masukkan nama: ");
    fgets(orang.nama, sizeof(orang.nama), stdin);
    orang.nama[strcspn(orang.nama, "\n")] = '\0';  // Menghilangkan newline

    printf("Masukkan tahun lahir: ");
    scanf("%d", &orang.tahun_lahir);

    int usia = hitungUsia(orang.tahun_lahir);
    printf("\nNama: %s\n", orang.nama);
    printf("Usia: %d tahun\n", usia);

    return 0;
}


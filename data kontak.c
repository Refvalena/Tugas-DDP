#include <stdio.h>

struct Kontak {
    char nama[50];
    char nomor[15];
};

int main() {
    struct Kontak kontak;
    
    printf("Masukkan nama kontak: ");
    fgets(kontak.nama, sizeof(kontak.nama), stdin);
    kontak.nama[strcspn(kontak.nama, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan nomor telepon: ");
    fgets(kontak.nomor, sizeof(kontak.nomor), stdin);
    kontak.nomor[strcspn(kontak.nomor, "\n")] = '\0';  // Menghilangkan newline
    
    printf("\nData Kontak:\n");
    printf("Nama: %s\n", kontak.nama);
    printf("Nomor Telepon: %s\n", kontak.nomor);

    return 0;
}


#include <stdio.h>

struct Pegawai {
    char nama[50];
    char nip[20];
    char jabatan[30];
    float gaji;
};

int main() {
    struct Pegawai pegawai;
    printf("Masukkan nama pegawai: ");
    fgets(pegawai.nama, sizeof(pegawai.nama), stdin);
    pegawai.nama[strcspn(pegawai.nama, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan NIP pegawai: ");
    fgets(pegawai.nip, sizeof(pegawai.nip), stdin);
    pegawai.nip[strcspn(pegawai.nip, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan jabatan pegawai: ");
    fgets(pegawai.jabatan, sizeof(pegawai.jabatan), stdin);
    pegawai.jabatan[strcspn(pegawai.jabatan, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan gaji pegawai: ");
    scanf("%f", &pegawai.gaji);

    printf("\nData Pegawai:\n");
    printf("Nama: %s\n", pegawai.nama);
    printf("NIP: %s\n", pegawai.nip);
    printf("Jabatan: %s\n", pegawai.jabatan);
    printf("Gaji: %.2f\n", pegawai.gaji);

    return 0;
}


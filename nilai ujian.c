#include <stdio.h>

struct Siswa {
    char nama[50];
    float nilai;
};

int main() {
    struct Siswa siswa;
    
    printf("Masukkan nama siswa: ");
    fgets(siswa.nama, sizeof(siswa.nama), stdin);
    siswa.nama[strcspn(siswa.nama, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan nilai ujian: ");
    scanf("%f", &siswa.nilai);

    printf("\nData Siswa:\n");
    printf("Nama: %s\n", siswa.nama);
    printf("Nilai: %.2f\n", siswa.nilai);

    return 0;
}


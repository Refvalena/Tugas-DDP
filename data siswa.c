#include <stdio.h>

struct Siswa {
    char nama[50];
    int umur;
    char kelas[10];
};

int main() {
    struct Siswa s;
    printf("Masukkan nama siswa: ");
    fgets(s.nama, sizeof(s.nama), stdin);
    s.nama[strcspn(s.nama, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan umur siswa: ");
    scanf("%d", &s.umur);
    getchar();  // Membersihkan buffer
    printf("Masukkan kelas siswa: ");
    fgets(s.kelas, sizeof(s.kelas), stdin);
    s.kelas[strcspn(s.kelas, "\n")] = '\0';  // Menghilangkan newline

    printf("\nData Siswa:\n");
    printf("Nama: %s\n", s.nama);
    printf("Umur: %d\n", s.umur);
    printf("Kelas: %s\n", s.kelas);

    return 0;
}


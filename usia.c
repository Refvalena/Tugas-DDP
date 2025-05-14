#include <stdio.h>

int main() {
    int usia;

    // Input usia
    printf("Masukkan usia Anda: ");
    scanf("%d", &usia);

    // Cek kategori usia
    if (usia >= 0 && usia <= 12) {
        printf("Anda masih anak-anak.\n");
    } 
    else if (usia >= 13 && usia <= 17) {
        printf("Anda seorang remaja.\n");
    } 
    else if (usia >= 18 && usia <= 59) {
        printf("Anda seorang dewasa.\n");
    } 
    else if (usia >= 60) {
        printf("Anda sudah lanjut usia.\n");
    } 
    else {
        printf("Usia yang Anda masukkan tidak valid.\n");
    }

    return 0;
}


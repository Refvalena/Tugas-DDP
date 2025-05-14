#include <stdio.h>

int main() {
    
    int a, b;
    int hasilSama, hasilTidakSama, hasilLebihBesar, hasilLebihKecil, hasilLebihBesarSama, hasilLebihKecilSama;

    // Input dua bilangan bulat
    printf("Masukkan bilangan pertama (a): ");
    scanf("%d", &a);

    printf("Masukkan bilangan kedua (b): ");
    scanf("%d", &b);

    // Operator relasional
    hasilSama = (a == b);                  // True jika a sama dengan b
    hasilTidakSama = (a != b);             // True jika a tidak sama dengan b
    hasilLebihBesar = (a > b);             // True jika a lebih besar dari b
    hasilLebihKecil = (a < b);             // True jika a lebih kecil dari b
    hasilLebihBesarSama = (a >= b);        // True jika a lebih besar atau sama dengan b
    hasilLebihKecilSama = (a <= b);        // True jika a lebih kecil atau sama dengan b

    // Menampilkan hasil operator relasional
    printf("Hasil a == b: %d\n", hasilSama);
    printf("Hasil a != b: %d\n", hasilTidakSama);
    printf("Hasil a > b: %d\n", hasilLebihBesar);
    printf("Hasil a < b: %d\n", hasilLebihKecil);
    printf("Hasil a >= b: %d\n", hasilLebihBesarSama);
    printf("Hasil a <= b: %d\n", hasilLebihKecilSama);

    return 0;
}


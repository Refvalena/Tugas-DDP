#include <stdio.h>

int main() {
    float suhu;

    // Meminta input suhu dari pengguna
    printf("Masukkan suhu dalam derajat Celsius: ");
    scanf("%f", &suhu);

    // Kondisional untuk mengecek kategori suhu
    if (suhu <= 0) {
        printf("Keadaan: Beku\n");
    } else if (suhu > 0 && suhu <= 20) {
        printf("Keadaan: Dingin\n");
    } else if (suhu > 20 && suhu <= 30) {
        printf("Keadaan: Sejuk\n");
    } else if (suhu > 30 && suhu <= 40) {
        printf("Keadaan: Hangat\n");
    } else if (suhu > 40) {
        printf("Keadaan: Panas\n");
    }

    // Menentukan apakah suhu nyaman untuk manusia
    if (suhu >= 20 && suhu <= 30) {
        printf("Suhu ini nyaman untuk manusia.\n");
    } else {
        printf("Suhu ini tidak nyaman untuk manusia.\n");
    }

    return 0;
}


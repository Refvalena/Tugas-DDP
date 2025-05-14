#include <stdio.h>

int main() {
    
    double jarak, kecepatanA, kecepatanB, waktuBerpapasan;
    int jamMulaiA, menitMulaiA, jamBerpapasan, menitBerpapasan;

    // Input jarak antara kedua kendaraan
    printf("Masukkan jarak antara kedua kendaraan (dalam km): ");
    scanf("%lf", &jarak);

    // Input kecepatan kendaraan A
    printf("Masukkan kecepatan kendaraan A (dalam km/jam): ");
    scanf("%lf", &kecepatanA);

    // Input kecepatan kendaraan B
    printf("Masukkan kecepatan kendaraan B (dalam km/jam): ");
    scanf("%lf", &kecepatanB);

    // Input jam mulai perjalanan
    printf("Masukkan jam mulai kendaraan A (format 24 jam, misal 14 untuk jam 2 siang): ");
    scanf("%d", &jamMulaiA);
    printf("Masukkan menit mulai kendaraan A: ");
    scanf("%d", &menitMulaiA);

    // Menghitung waktu berpapasan dalam jam
    waktuBerpapasan = jarak / (kecepatanA + kecepatanB);

    // Menghitung jam dan menit saat berpapasan
    jamBerpapasan = jamMulaiA + (int)waktuBerpapasan;
    menitBerpapasan = menitMulaiA + (int)((waktuBerpapasan - (int)waktuBerpapasan) * 60);

    // Menangani jika menit lebih dari 60
    if (menitBerpapasan >= 60) {
        jamBerpapasan += 1;
        menitBerpapasan -= 60;
    }

    // Output jam berpapasan
    printf("Jam berpapasan adalah pada %02d:%02d\n", jamBerpapasan, menitBerpapasan);

    return 0;
}


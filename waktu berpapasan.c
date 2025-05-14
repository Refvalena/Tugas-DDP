#include <stdio.h>

int main() {
    
    double jarak, kecepatanA, kecepatanB, waktuBerpapasan;

    // Input jarak antara kedua kendaraan
    printf("Masukkan jarak antara kedua kendaraan (dalam km): ");
    scanf("%lf", &jarak);

    // Input kecepatan kendaraan A
    printf("Masukkan kecepatan kendaraan A (dalam km/jam): ");
    scanf("%lf", &kecepatanA);

    // Input kecepatan kendaraan B
    printf("Masukkan kecepatan kendaraan B (dalam km/jam): ");
    scanf("%lf", &kecepatanB);

    // Menghitung waktu berpapasan
    waktuBerpapasan = jarak / (kecepatanA + kecepatanB);

    // Output waktu berpapasan
    printf("Waktu berpapasan adalah: %.2lf jam\n", waktuBerpapasan);

    return 0;
}


#include <stdio.h>

struct Kendaraan {
    char merek[50];
    int tahun;
    float harga;
};

int main() {
    struct Kendaraan k;
    printf("Masukkan merek kendaraan: ");
    fgets(k.merek, sizeof(k.merek), stdin);
    k.merek[strcspn(k.merek, "\n")] = '\0';  // Menghilangkan newline
    printf("Masukkan tahun kendaraan: ");
    scanf("%d", &k.tahun);
    printf("Masukkan harga kendaraan: ");
    scanf("%f", &k.harga);

    printf("\nData Kendaraan:\n");
    printf("Merek: %s\n", k.merek);
    printf("Tahun: %d\n", k.tahun);
    printf("Harga: %.2f\n", k.harga);

    return 0;
}


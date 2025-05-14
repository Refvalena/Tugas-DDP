#include <stdio.h>

struct Diskon {
    float harga_asli;
    float persen_diskon;
};

float hitungHargaSetelahDiskon(struct Diskon d) {
    return d.harga_asli - (d.harga_asli * d.persen_diskon / 100);
}

int main() {
    struct Diskon d;
    printf("Masukkan harga asli: ");
    scanf("%f", &d.harga_asli);
    printf("Masukkan persen diskon: ");
    scanf("%f", &d.persen_diskon);

    float hargaSetelahDiskon = hitungHargaSetelahDiskon(d);
    printf("\nHarga Setelah Diskon: %.2f\n", hargaSetelahDiskon);

    return 0;
}


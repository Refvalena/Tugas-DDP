#include <stdio.h>

struct Kubus {
    float sisi;
};

float hitungVolume(struct Kubus k) {
    return k.sisi * k.sisi * k.sisi;
}

float hitungLuasPermukaan(struct Kubus k) {
    return 6 * k.sisi * k.sisi;
}

int main() {
    struct Kubus k;
    printf("Masukkan panjang sisi kubus: ");
    scanf("%f", &k.sisi);

    float volume = hitungVolume(k);
    float luasPermukaan = hitungLuasPermukaan(k);

    printf("\nVolume Kubus: %.2f\n", volume);
    printf("Luas Permukaan Kubus: %.2f\n", luasPermukaan);

    return 0;
}


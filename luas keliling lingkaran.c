#include <stdio.h>

struct Lingkaran {
    float radius;
};

float hitungLuas(struct Lingkaran l) {
    return 3.14 * l.radius * l.radius;
}

float hitungKeliling(struct Lingkaran l) {
    return 2 * 3.14 * l.radius;
}

int main() {
    struct Lingkaran l;
    printf("Masukkan radius lingkaran: ");
    scanf("%f", &l.radius);

    float luas = hitungLuas(l);
    float keliling = hitungKeliling(l);

    printf("\nLuas Lingkaran: %.2f\n", luas);
    printf("Keliling Lingkaran: %.2f\n", keliling);

    return 0;
}


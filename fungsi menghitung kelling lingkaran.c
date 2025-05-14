#include <stdio.h>
#define PI 3.14159

float kelilingLingkaran(float radius) {
    return 2 * PI * radius;
}

int main() {
    float r;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);
    printf("Keliling lingkaran adalah: %.2f\n", kelilingLingkaran(r));
    return 0;
}


#include <stdio.h>

int main() {
    float x, y;

    // Meminta input koordinat titik dari pengguna
    printf("Masukkan koordinat x: ");
    scanf("%f", &x);
    printf("Masukkan koordinat y: ");
    scanf("%f", &y);

    // Kondisional untuk menentukan kuadran atau posisi titik
    if (x > 0 && y > 0) {
        printf("Titik (%.2f, %.2f) berada di Kuadran I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("Titik (%.2f, %.2f) berada di Kuadran II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("Titik (%.2f, %.2f) berada di Kuadran III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("Titik (%.2f, %.2f) berada di Kuadran IV.\n", x, y);
    } else if (x == 0 && y != 0) {
        printf("Titik (%.2f, %.2f) berada di sumbu Y.\n", x, y);
    } else if (y == 0 && x != 0) {
        printf("Titik (%.2f, %.2f) berada di sumbu X.\n", x, y);
    } else {
        printf("Titik (%.2f, %.2f) berada di titik origin (0, 0).\n", x, y);
    }

    return 0;
}


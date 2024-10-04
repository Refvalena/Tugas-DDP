#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Masukkan suhu dalam Celsius: ");
    scanf("%f", &celsius);

    // Mengonversi Celsius ke Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);

    return 0; 
}


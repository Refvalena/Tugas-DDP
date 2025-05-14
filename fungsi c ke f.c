#include <stdio.h>

float celciusToFahrenheit(float celcius) {
    return (celcius * 9 / 5) + 32;
}

int main() {
    float celcius;
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%f", &celcius);
    printf("Suhu dalam Fahrenheit: %.2f\n", celciusToFahrenheit(celcius));
    return 0;
}


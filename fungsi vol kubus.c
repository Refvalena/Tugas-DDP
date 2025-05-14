#include <stdio.h>

int volumeKubus(int sisi) {
    return sisi * sisi * sisi;
}

int main() {
    int sisi;
    printf("Masukkan panjang sisi kubus: ");
    scanf("%d", &sisi);
    printf("Volume kubus adalah: %d\n", volumeKubus(sisi));
    return 0;
}


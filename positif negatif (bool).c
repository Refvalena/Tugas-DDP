#include <stdio.h>
#include <stdbool.h> 

int main() {
    int angka;
    bool isGenap; 

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    isGenap = (angka % 2 == 0);

    if (isGenap) {
        printf("%d adalah bilangan genap.\n", angka);
    } else {
        printf("%d adalah bilangan ganjil.\n", angka);
    }


    if (angka < 0) {
        printf("Angka %d adalah bilangan negatif.\n", angka);
    } else if (angka > 0) {
        printf("Angka %d adalah bilangan positif.\n", angka);
    } else {
        printf("Angka adalah nol.\n");
    }

    return 0;
}


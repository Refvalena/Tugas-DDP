#include <stdio.h>

int main() {
    int angka;

   
    printf("Masukkan sebuah angka: ");
    scanf("%d", &angka);

   
    if (angka > 0) {
        printf("Angka yang Anda masukkan adalah bilangan positif.\n");

        
        if (angka % 2 == 0) {
            printf("Angka tersebut adalah bilangan genap.\n");
        } else {
            printf("Angka tersebut adalah bilangan ganjil.\n");
        }
    } 
    else if (angka < 0) {
        printf("Angka yang Anda masukkan adalah bilangan negatif.\n");

        
        if (angka % 2 == 0) {
            printf("Angka tersebut adalah bilangan genap.\n");
        } else {
            printf("Angka tersebut adalah bilangan ganjil.\n");
        }
    } 
    else {
        printf("Anda memasukkan angka nol.\n");
    }

    return 0;
}


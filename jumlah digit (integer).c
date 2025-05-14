#include <stdio.h>

int main() {
    
    int angka, jumlahDigit = 0;

    
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &angka);

    
    if (angka < 0) {
        angka = -angka; 
    }

   
    do {
        jumlahDigit++; 
        angka /= 10;   
    } while (angka > 0); 

    
    printf("Jumlah digit: %d\n", jumlahDigit);

    return 0;
}


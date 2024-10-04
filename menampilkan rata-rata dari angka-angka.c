#include <stdio.h>

int main() {
    int i;
    float angka[5], jumlah = 0.0, rata;

   
    printf("Masukkan 5 angka:\n");
    for (i = 0; i < 5; i++) {
        printf("Angka %d: ", i + 1);
        scanf("%f", &angka[i]);
        jumlah += angka[i]; 
    }

    
    rata = jumlah / 5;

    printf("Rata-rata dari angka yang dimasukkan adalah: %.2f\n", rata);

    return 0; 
}


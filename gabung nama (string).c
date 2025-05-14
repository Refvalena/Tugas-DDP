#include <stdio.h>

int main() {

    char nama1[50], nama2[50], hasil[100];
    
    printf("Masukkan nama pertama: ");
    scanf("%49s", nama1); 

    printf("Masukkan nama kedua: ");
    scanf("%49s", nama2); 

    snprintf(hasil, sizeof(hasil), "%s dan %s", nama1, nama2); 

    printf("Hasil penggabungan: %s\n", hasil);

    return 0;
}


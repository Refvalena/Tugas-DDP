#include <stdio.h>

int main() {
    
    char nama[50]; 
    int umur;

    printf("Masukkan nama Anda: ");
    scanf("%s", nama);

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);

    printf("Halo, %s! Anda berumur %d tahun.\n", nama, umur);
    
    if (umur < 18) {
        printf("Anda masih di bawah umur.\n");
    } else {
        printf("Anda sudah dewasa.\n");
    }

    return 0;
}


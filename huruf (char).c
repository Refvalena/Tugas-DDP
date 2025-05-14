#include <stdio.h>

int main() {
    char huruf1 = 'A';
    char huruf2 = 'B';
    char huruf3 = 'C';

    printf("Huruf pertama: %c\n", huruf1);
    printf("Huruf kedua: %c\n", huruf2);
    printf("Huruf ketiga: %c\n", huruf3);

    huruf1 = 'X';
    huruf2 = 'Y';
    huruf3 = 'Z';

    printf("Huruf pertama setelah diubah: %c\n", huruf1);
    printf("Huruf kedua setelah diubah: %c\n", huruf2);
    printf("Huruf ketiga setelah diubah: %c\n", huruf3);

    return 0;
}


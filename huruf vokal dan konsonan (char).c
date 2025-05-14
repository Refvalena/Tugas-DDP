#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan sebuah karakter: ");
    scanf("%c", &karakter); 

    if (karakter == 'a' || karakter == 'A' ||
        karakter == 'e' || karakter == 'E' ||
        karakter == 'i' || karakter == 'I' ||
        karakter == 'o' || karakter == 'O' ||
        karakter == 'u' || karakter == 'U') {
        printf("%c adalah huruf vokal.\n", karakter);
    } else if ((karakter >= 'b' && karakter <= 'z') || 
               (karakter >= 'B' && karakter <= 'Z')) {
        printf("%c adalah huruf konsonan.\n", karakter);
    } else {
        printf("Input tidak valid. Silakan masukkan huruf.\n");
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reverse[100];
    int length, i, j = 0;

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str) - 1; 

    for (i = length; i >= 0; i--) {
        reverse[j++] = str[i];
    }
    reverse[j] = '\0';

    printf("String terbalik: %s\n", reverse);
    return 0;
}


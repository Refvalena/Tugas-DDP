#include <stdio.h>
#include <string.h>

void balikString(char *str, int awal, int akhir) {
    if (awal >= akhir) return;
    char temp = str[awal];
    str[awal] = str[akhir];
    str[akhir] = temp;
    balikString(str, awal + 1, akhir - 1);
}

int main() {
    char str[100];
    printf("Masukkan sebuah string: ");
    scanf("%s", str);
    balikString(str, 0, strlen(str) - 1);
    printf("String setelah dibalik: %s\n", str);
    return 0;
}


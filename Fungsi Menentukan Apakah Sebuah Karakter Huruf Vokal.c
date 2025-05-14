#include <stdio.h>
#include <ctype.h>

int isVokal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char ch;
    printf("Masukkan karakter: ");
    scanf(" %c", &ch);
    if (isVokal(ch))
        printf("%c adalah huruf vokal.\n", ch);
    else
        printf("%c bukan huruf vokal.\n", ch);
    return 0;
}


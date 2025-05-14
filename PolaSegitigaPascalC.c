#include <stdio.h>

int main() {
    int i, j, n = 5, coef = 1;
    for (i = 0; i < n; i++) {
        for (j = 1; j <= n - i; j++)
            printf("  ");
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}


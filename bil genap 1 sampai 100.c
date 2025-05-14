#include <stdio.h>

int main() {
    int i;
    printf("Bilangan genap dari 1 hingga 100:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


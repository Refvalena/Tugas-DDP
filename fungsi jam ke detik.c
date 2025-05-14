#include <stdio.h>

int jamToDetik(int jam, int menit, int detik) {
    return (jam * 3600) + (menit * 60) + detik;
}

int main() {
    int jam, menit, detik;
    printf("Masukkan jam, menit, dan detik: ");
    scanf("%d %d %d", &jam, &menit, &detik);
    printf("Total detik: %d\n", jamToDetik(jam, menit, detik));
    return 0;
}


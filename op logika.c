#include <stdio.h>

int main() {
    
    int a, b;
    int hasilAND, hasilOR, hasilNOT;

    // Input dua bilangan bulat
    printf("Masukkan bilangan pertama (a): ");
    scanf("%d", &a);

    printf("Masukkan bilangan kedua (b): ");
    scanf("%d", &b);

    // Operator logika AND (&&)
    hasilAND = (a > 0) && (b > 0);  // True jika kedua bilangan lebih besar dari 0
    printf("Hasil a > 0 && b > 0: %d\n", hasilAND);

    // Operator logika OR (||)
    hasilOR = (a > 0) || (b > 0);  // True jika salah satu bilangan lebih besar dari 0
    printf("Hasil a > 0 || b > 0: %d\n", hasilOR);

    // Operator logika NOT (!)
    hasilNOT = !(a > 0);  // True jika a tidak lebih besar dari 0
    printf("Hasil !(a > 0): %d\n", hasilNOT);

    return 0;
}

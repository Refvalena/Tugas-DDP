#include <stdio.h>

int main() {
    
    int a, b;

    // Input bilangan bulat
    printf("Masukkan bilangan bulat (a): ");
    scanf("%d", &a);

    printf("Masukkan bilangan bulat (b): ");
    scanf("%d", &b);

    // Menampilkan nilai awal
    printf("Nilai awal a: %d\n", a);
    printf("Nilai awal b: %d\n", b);

    // Menggunakan operator increment
    printf("\nMenggunakan operator increment:\n");
    printf("Nilai a setelah a++: %d\n", a++); // Menggunakan postfix increment
    printf("Nilai a setelah increment: %d\n", a); // Nilai a setelah increment

    printf("Nilai b setelah ++b: %d\n", ++b); // Menggunakan prefix increment
    printf("Nilai b setelah increment: %d\n", b); // Nilai b setelah increment

    // Menggunakan operator decrement
    printf("\nMenggunakan operator decrement:\n");
    printf("Nilai a setelah a--: %d\n", a--); // Menggunakan postfix decrement
    printf("Nilai a setelah decrement: %d\n", a); // Nilai a setelah decrement

    printf("Nilai b setelah --b: %d\n", --b); // Menggunakan prefix decrement
    printf("Nilai b setelah decrement: %d\n", b); // Nilai b setelah decrement

    return 0;
}

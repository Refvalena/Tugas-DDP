#include <stdio.h>

int main() {
    int choice;
    float price;

    // Daftar menu makanan
    printf("Menu Makanan dan Harga:\n");
    printf("1. Nasi Goreng - Rp 20.000\n");
    printf("2. Mie Goreng - Rp 15.000\n");
    printf("3. Sate Ayam - Rp 25.000\n");
    printf("4. Ayam Penyet - Rp 30.000\n");
    printf("5. Bakso - Rp 12.000\n");
    printf("6. Soto Ayam - Rp 18.000\n");
    printf("7. Gado-Gado - Rp 15.000\n");
    printf("8. Rendang - Rp 40.000\n");
    printf("9. Capcay - Rp 20.000\n");
    printf("10. Pizza - Rp 50.000\n");
    printf("11. Burger - Rp 25.000\n");
    printf("12. Spaghetti - Rp 30.000\n");
    printf("13. Tahu Tempe - Rp 10.000\n");
    printf("14. Cendol - Rp 8.000\n");
    printf("15. Teh Manis - Rp 5.000\n");

    // Looping untuk memilih makanan
    while (1) {
        printf("\nPilih menu (1-15) atau 0 untuk keluar: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Terima kasih! Program selesai.\n");
            break;
        }

        switch (choice) {
            case 1: price = 20000; break;
            case 2: price = 15000; break;
            case 3: price = 25000; break;
            case 4: price = 30000; break;
            case 5: price = 12000; break;
            case 6: price = 18000; break;
            case 7: price = 15000; break;
            case 8: price = 40000; break;
            case 9: price = 20000; break;
            case 10: price = 50000; break;
            case 11: price = 25000; break;
            case 12: price = 30000; break;
            case 13: price = 10000; break;
            case 14: price = 8000; break;
            case 15: price = 5000; break;
            default: printf("Pilihan tidak valid!\n"); continue;
        }

        printf("Harga: Rp %.2f\n", price);
    }

    return 0;
}


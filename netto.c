#include <stdio.h>

int main() {
    
    double saldoAwal, bungaPersen, pajakPersen, bungaBruto, bungaNetto;
    int tahun;

    // Input saldo awal
    printf("Masukkan saldo awal: ");
    scanf("%lf", &saldoAwal);

    // Input persentase bunga per tahun
    printf("Masukkan persentase bunga per tahun: ");
    scanf("%lf", &bungaPersen);

    // Input persentase pajak
    printf("Masukkan persentase pajak: ");
    scanf("%lf", &pajakPersen);

    // Input jumlah tahun
    printf("Masukkan jumlah tahun: ");
    scanf("%d", &tahun);

    // Menghitung bunga bruto
    bungaBruto = saldoAwal * (bungaPersen / 100) * tahun;

    // Menghitung bunga netto setelah pajak
    bungaNetto = bungaBruto - (bungaBruto * pajakPersen / 100);

    // Output bunga netto
    printf("Bunga netto setelah pajak: %.2lf\n", bungaNetto);

    return 0;
}


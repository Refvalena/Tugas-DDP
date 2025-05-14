#include <stdio.h>

int main() {
    
    double saldoAwal, bungaPersen, bunga, saldoAkhir;
    int tahun;

    // Input saldo awal
    printf("Masukkan saldo awal: ");
    scanf("%lf", &saldoAwal);

    // Input persentase bunga per tahun
    printf("Masukkan persentase bunga per tahun: ");
    scanf("%lf", &bungaPersen);

    // Input jumlah tahun
    printf("Masukkan jumlah tahun: ");
    scanf("%d", &tahun);

    // Menghitung bunga dan saldo akhir
    bunga = saldoAwal * (bungaPersen / 100) * tahun;
    saldoAkhir = saldoAwal + bunga;

    // Output bunga dan saldo akhir
    printf("Bunga yang diperoleh: %.2lf\n", bunga);
    printf("Saldo akhir setelah %d tahun: %.2lf\n", tahun, saldoAkhir);

    return 0;
}


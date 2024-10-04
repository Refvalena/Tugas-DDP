#include <stdio.h>

int main() {
    int skor = 0;  
    int jawaban;

    printf("Selamat datang di Kuis! \n");

    // Pertanyaan 1
    printf("1. Apa ibukota Prancis?\n");
    printf("1) Berlin\n");
    printf("2) Madrid\n");
    printf("3) Paris\n");
    printf("4) Roma\n");
    printf("Jawaban Anda: ");
    scanf("%d", &jawaban);
    
    if (jawaban == 3) {
        skor++;
        printf("Benar!\n");
    } else {
        printf("Salah! Jawaban yang benar adalah 3) Paris.\n");
    }

    // Pertanyaan 2
    printf("\n2. Siapa penulis novel '1984'?\n");
    printf("1) George Orwell\n");
    printf("2) J.K. Rowling\n");
    printf("3) Mark Twain\n");
    printf("4) Ernest Hemingway\n");
    printf("Jawaban Anda: ");
    scanf("%d", &jawaban);
    
    if (jawaban == 1) {
        skor++;
        printf("Benar!\n");
    } else {
        printf("Salah! Jawaban yang benar adalah 1) George Orwell.\n");
    }

    // Pertanyaan 3
    printf("\n3. Apa elemen kimia dengan simbol 'O'?\n");
    printf("1) Oksigen\n");
    printf("2) Hidrogen\n");
    printf("3) Karbon\n");
    printf("4) Nitrogen\n");
    printf("Jawaban Anda: ");
    scanf("%d", &jawaban);
    
    if (jawaban == 1) {
        skor++;
        printf("Benar!\n");
    } else {
        printf("Salah! Jawaban yang benar adalah 1) Oksigen.\n");
    }

    // Menampilkan skor akhir
    printf("\nSkor akhir Anda: %d dari 3\n", skor);

    return 0;
}


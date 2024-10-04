#include <iostream>
using namespace std;

int main() {
    int skor = 0;
    char jawaban;

    cout << "Quiz Program" << endl;
    cout << "----------------" << endl;

    cout << "pertanyaan 1: Apa ibu kota Indonesia?" << endl;
    cout << "A) Jakarta" << endl;
    cout << "B) Bandung" << endl;
    cout << "C) Surabaya" << endl;
    cout << "D) Medan" << endl;
    cout << "jawaban anda: ";
    cin >> jawaban;

    if (jawaban == 'A' || jawaban == 'a') {
        skor++;
        cout << "Benar!" << endl;
    } else {
        cout << "Salah. jawaban yang benar adalah A) Jakarta." << endl;
    }

    cout << "pertanyaan 2: Siapakah presiden pertama Indonesia?" << endl;
    cout << "A) Soeharto" << endl;
    cout << "B) Habibie" << endl;
    cout << "C) Sukarno" << endl;
    cout << "D) Megawati" << endl;
    cout << "jawaban anda: ";
    cin >> jawaban;

    if (jawaban == 'C' || jawaban == 'c') {
        skor++;
        cout << "Benar!" << endl;
    } else {
        cout << "Salah. jawaban yang benar adalah C) Sukarno." << endl;
    }
    
    cout << "pertanyaan 3: apa ibu kota jawa tengah" << endl;
    cout << "A) bandung" << endl;
    cout << "B) jakarta" << endl;
    cout << "C) cilacap" << endl;
    cout << "D) semarang" << endl;
    cout << "jawaban anda: ";
    cin >> jawaban;

    if (jawaban == 'D' || jawaban == 'd') {
        skor++;
        cout << "Benar!" << endl;
    } else {
        cout << "Salah. jawaban yang benar adalah D) semarang." << endl;
    }
    
    
    cout << "skor akhir anda adalah: " << skor << "/3" << endl;

    return 0;
    
    
}

#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Masukkan total detik: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;        
    minutes = (totalSeconds % 3600) / 60; 
    seconds = totalSeconds % 60;          

    cout << "Waktu: " << hours << " jam, " << minutes << " menit, " << seconds << " detik." << endl;

    return 0;
}

